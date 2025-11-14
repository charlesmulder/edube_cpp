.PHONY: clean

prog: prog.cpp
	mkdir -p bin
	g++ prog.cpp -o bin/prog

run: prog
	./bin/prog

clean:
	rm -r bin
