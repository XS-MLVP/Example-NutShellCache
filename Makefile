DUT_NAME = Cache

# Tools
PYTHON 		= python3
PYTEST 		= pytest
VERILATOR	= verilator
VERILATOR_C	= verilator_coverage
GENHTML		= genhtml

UT_DIR	= UT_${DUT_NAME}
ENTRANCE = ${UT_DIR}/__init__.py

run:
	@$(PYTHON) $(ENTRANCE)

# This will generate functional coverage
pytest:
	@cd ${UT_DIR} && $(PYTEST) test/tb_cache.py

LCOV_DAT = ./${UT_DIR}/V${DUT_NAME}_coverage.dat
genlcov: ${LCOV_DAT}
	$(VERILATOR_C) -write-info coverage.info ${LCOV_DAT}
	$(GENHTML) coverage.info --output-directory cov/line_cov