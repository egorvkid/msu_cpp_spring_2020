CC=g++
BigInt_impl: BigInt.h BigInt.cpp
	$(CC) -c BigInt.cpp -o BigInt.o --std=c++14
main_compile: BigInt_impl tests.h
	$(CC) BigInt.o main.cpp tests.cpp -o main --std=c++14
run: BigInt_impl main_compile
	./main
clean:
	rm -rf BigInt.o tests main
