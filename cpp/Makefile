all: compile
	cp build/UTCache_example .
	rm -rf build
	./UTCache_example || true

compile:
	cmake . -Bbuild
	cmake --build build --config Release --parallel `nproc`

clean: 
	rm -rf *.fst *.vcd *.fsdb *.log *.key *.dat