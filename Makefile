VSRC_DIR    = ./rtl
PICKER      = picker
NAME        = Cache
NAME_L      = cache
SIM         = verilator
WAVE_FORMAT = fst
TARGET_LANG = python
GTKWAVE 	= gtkwave

# Generate DUT
TOP_ENTRY = ./rtl/Cache.v
TL = python
WAVEFORM = -w cache.fst

gen_dut:
	$(PICKER) export --autobuild=true $(VSRC_DIR)/$(NAME).v \
		-w $(NAME).$(WAVE_FORMAT) \
		--sname $(NAME) \
		--tdir $(NAME) \
		--lang $(TARGET_LANG) \
		--sim $(SIM) \
		-e -c

.PHONY: wave test

wave:
	$(GTKWAVE) -r .gtkwaverc $(NAME_L).$(WAVE_FORMAT)
# Test
test:
	PYTHONPATH=.:./src pytest -sv

clean:
	-rm -rf *.dat *.fst reports