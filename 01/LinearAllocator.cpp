#include <iostream>
#include <cstdlib>
#include "LinearAllocator.h"


using namespace std;

char* beginPointer = nullptr;
size_t maxSize = 0;
size_t currSize = 0;

void makeAllocator(size_t maxS)
{
	if (!maxS)
		return;
	maxSize = maxS;
	currSize = 0;
	beginPointer = (char*)malloc(sizeof(char) * maxS);
	return;
}

char* alloc(size_t size)
{
	size_t newSize = currSize + size;
	if (beginPointer && (newSize <= maxSize))
	{
		char* ptr = beginPointer + currSize;
		currSize = newSize;
		return ptr;
	}
	return NULL;
}


void reset()
{
	currSize = 0;
	maxSize = 0;
	free(beginPointer);
	beginPointer = NULL;
	return;
}
