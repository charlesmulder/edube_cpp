.PHONY: clean

prog: prog.cpp
	mkdir -p bin
	g++ -o bin/prog prog.cpp

clean: 
	rm -rf bin

run: prog
	./bin/prog
