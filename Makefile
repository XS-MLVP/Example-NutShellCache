PICKER = picker

# Generate DUT
TOP_ENTRY = ./Cache.v
TL = python
WAVEFORM = -w cache.fst

gen_dut:
	$(PICKER) export ${TOP_ENTRY} --lang ${TL} -c ${WAVEFORM}

clean:
	-rm -rf $(BUILD_DIR)
	-$(MAKE) -C $(NutShellDir) clean	