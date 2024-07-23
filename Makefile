PICKER = picker
PYTHON = python3
GTKWAVE = gtkwave
BROWSER = google-chrome

RPT_DIR = report
$(shell mkdir -p ./$(RPT_DIR))

# Generate DUT
TOP_ENTRY = ./Cache.v
TL = python
WAVEFORM = -w cache.fst

gen_dut:
	$(PICKER) export ${TOP_ENTRY} --lang ${TL} -c ${WAVEFORM}

.PHONY: wave rpt test
# Test
test:
	-@mkdir $(RPT_DIR)/cov_dat
	-@mkdir $(RPT_DIR)/fst
	-@mkdir $(RPT_DIR)/logs
	PYTHONPATH=. $(PYTHON) __init__.py

rpt:
	$(BROWSER) ./$(RPT_DIR)/rpt.html

clean:
	-rm -rf report