all: test

LinearAllocator.o: LinearAllocator.cpp LinearAllocator.h
	g++ -c -g -O2 LinearAllocator.cpp 

main.o: main.cpp LinearAllocator.h
	g++ -c -g -O2 main.cpp

out: main.o LinearAllocator.o
	g++ -g -O2 main.o LinearAllocator.o -o out

test: out
	./out
clean:
	rm -rf main *~
