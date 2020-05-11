CC=g++
CFLAGS = --std=c++14
compile: main.cpp MyVector.h MyIterator.h MyAllocator.h
	$(CC) main.cpp -o main $(CFLAGS)
run: compile
	./main
test: compile
	./main
clean:
	rm -rf main *~
