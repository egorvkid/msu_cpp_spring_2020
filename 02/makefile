CC=g++
matrix_class: matrix.hpp matrix.cpp
	$(CC) -c matrix.cpp -o matrix.o --std=c++11
main_compile: matrix_class
	$(CC) matrix.o main.cpp -o main --std=c++11
run: matrix_class main_compile
	./main
test: matrix_class test_compile
	./main
clean:
	rm -rf matrix.o tests main
