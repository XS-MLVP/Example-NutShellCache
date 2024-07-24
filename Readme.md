# Nutshell Cache Verification Case with MLVP

## Requirement
**Picker**: https://github.com/XS-MLVP/picker  
**MLVP**: https://github.com/XS-MLVP/mlvp

## Directory
```
.
├── __init__.py     # Entrance
├── Makefile
├── pytest.ini
├── Readme.md
├── rtl
│   └── Cache.v
├── src
│   ├── env
│   │   ├── bundle.py
│   │   ├── cache_dut.py
│   │   ├── simplebus_wrap.py
│   │   └── simpleram.py
│   ├── ref
│   │   └── ref_cache.py
│   └── utils
│       ├── cmd_code.py
│       └── common.py
└── test
    ├── chk_miss.py
    ├── chk_mmio.py
    ├── conftest.py     # pytest hook
    ├── test_miss.py
    ├── test_mmio.py
    ├── test_random.py
    └── test_smoke.py
```

## Command
```bash
make gen_dut      # Generate the software package DUT
make test         # run test
make rpt          # view the report
make wave FILE='name'  # open .fst wavefile with gtkwave
make clean        # remove 'report' directory
```