DUT_NAME = Cache
PYTHON = python3
PYTEST = pytest

UT_DIR	= UT_${DUT_NAME}
ENTRANCE = ${UT_DIR}/__init__.py

run:
	@$(PYTHON) $(ENTRANCE)

pytest:
	@cd ${UT_DIR} && $(PYTEST) test/tb_cache.py