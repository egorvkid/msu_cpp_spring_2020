
CC=g++
CFLAGS = --std=c++14
compile: format.h main.cpp
	$(CC) main.cpp -o main $(CFLAGS)
test: compile
	./main
clean:
	rm -rf main
