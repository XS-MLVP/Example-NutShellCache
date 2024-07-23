import pytest
from mlvp.reporter import *
from env.cache_dut import CacheDut
from env.simpleram import SimpleRam
from env.simplebus_wrap import *

import mlvp
import logging


@pytest.hookimpl(trylast=True, optionalhook=True)
def pytest_reporter_context(context, config):
    process_context(context, config)


@pytest.hookimpl(tryfirst=True, hookwrapper=True)
def pytest_runtest_makereport(item, call):
    outcome = yield
    report = outcome.get_result()
    return process_func_coverage(item, call, report)


@pytest.fixture()
def cache_pytest_req(request):
    func_name = str(request._pyfuncitem).strip('<').strip('>').split(' ')[-1]

    # Settup
    mlvp.setup_logging(
        log_level=logging.ERROR,
        console_display=False,
        log_file=f"report/logs/{func_name}.log"
    )

    pins = CacheDut(func_name)
    mem_ram = SimpleRam(SimplebusWrapper(pins.mem_bundle), pins.xclock)
    coh_ram = SimpleRam(SimplebusWrapper(pins.coh_bundle), pins.xclock)
    mmio_ram = SimpleRam(SimplebusWrapper(pins.mmio_bundle), pins.xclock)
    groups = []

    yield pins, groups

    pins.finalize()
    set_func_coverage(request, groups)
    set_line_coverage(request, f"report/cov_dat/cache_{func_name}.dat")

    for g in groups:
        g.clear()
