#include <iostream>
#include <cstdlib>
#include "LinearAllocator.h"


using namespace std;

char* beginPointer = nullptr;
char* endPointer = nullptr;
size_t maxSize = 0;
size_t currSize = 0;

int makeAllocator(size_t maxS)
{
	maxSize = maxS;
	currSize = 0;
	if (!(beginPointer = (char*)malloc(maxSize)))
	{
		return true;
	}
	endPointer = beginPointer;
	return 0;
}

char* alloc(size_t size)
{
	if ((currSize + size) > maxSize)
	{
		return nullptr;
	}
	currSize += size;
	char* currPointer = endPointer;
	endPointer += size;
	return currPointer;
}

void reset()
{
	currSize = 0;
	endPointer = beginPointer;
}

void freeAllocator()
{
	maxSize = 0;
	currSize = 0;
	endPointer = nullptr;
	beginPointer = nullptr;
	free(beginPointer);
}
