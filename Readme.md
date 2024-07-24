# Nutshell Cache Verification Case with MLVP

## Requirement
**Picker**: https://github.com/XS-MLVP/picker  
**MLVP**: https://github.com/XS-MLVP/mlvp

## Directory
```
.
├── Cache.v                 # RTL
├── __init__.py             # Test entrance
├── Makefile
├── pytest.ini              # config of pytest
├── Readme.md
├── src
│   ├── env
│   │   ├── bundle.py
│   │   ├── cache_dut.py
│   │   ├── simplebus_wrap.py
│   │   └── simpleram.py        # simulator of SimpleRam
│   ├── ref
│   │   └── ref_cache.py        # Reference Model
│   └── utils
│       ├── cmd_code.py
│       └── common.py
└── test                # test cases
    ├── chk_mmio.py     # functional coverage checker
    ├── conftest.py     # pytest hook
    ├── test_mmio.py
    ├── test_random.py
    ├── ...
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