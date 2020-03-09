#include <cstdlib> 
#include "LinearAllocator.h"
using namespace std;

void LinearAllocator::makeAllocator (size_t maxSize) {
    
    start_ = static_cast<char *>(malloc(maxSize));
    
    if (start_ != nullptr) {
        end_ = start_ + maxSize - 1;
    }
    else
        end_ = nullptr;
    
    current_ = start_;                       
}

LinearAllocator::~LinearAllocator (void) {
    if ( start_ != nullptr ) {
        free(start_);
    }
}

char * LinearAllocator::alloc (size_t size) {

    if (start_ == nullptr)
        return nullptr;
    
    else if ( current_ + size - 1 > end_ )
        return nullptr;
    
    else {
        char * new_pointer = current_;
        current_ += size;
        return new_pointer;
    }
}

void LinearAllocator::reset (void) {
    current_ = start_;
}

