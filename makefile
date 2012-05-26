main:
	make -C src 
	mkdir -p bin 
	cp src/scdraw/bin/* bin/
