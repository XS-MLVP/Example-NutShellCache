import pytest
from mlvp.reporter import *
from env.cache_dut import CacheDut

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

    pins = CacheDut(func_name)
    groups = []

    yield pins, groups

    pins.finalize()
    set_func_coverage(request, groups)
    set_line_coverage(request, f"report/cov_dat/cache_{func_name}.dat")

    for g in groups:
        g.clear()
