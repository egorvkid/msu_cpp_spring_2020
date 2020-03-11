#pragma once
class LinearAllocator
{
    private:
        size_t maxSize;
        char * start_;
        char * current_;
        char * end_;

    public:
	LinearAllocator(size_t maxSize) { makeAllocator(maxSize); }
        void makeAllocator (size_t maxSize);
        ~LinearAllocator (void);
        char* alloc (size_t size);
        void reset (void);
};
