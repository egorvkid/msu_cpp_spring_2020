#pragma once
int makeAllocator(size_t maxSize);
char* alloc(size_t size);
void reset();
void freeAllocator();