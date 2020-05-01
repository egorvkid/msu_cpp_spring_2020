CC=g++
CFLAGS = --std=c++14
compile: Serializer.h Deserializer.h Data.h Error.h
	$(CC) main.cpp -o main $(CFLAGS)
test: compile
	./main
clean:
	rm -rf Data.o main
