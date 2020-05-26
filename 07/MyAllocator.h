#include <exception>

template <class T>
class MyAllocator {

public:
	using value_type = T;
	using pointer = T*;
	using const_pointer = const T*;
	using reference = T&;
	using const_reference = const T&;
	using size_type = std::size_t;

	MyAllocator();
	~MyAllocator();

	pointer allocate(size_type);
	void deallocate(pointer);

	template <class... Args>
	void construct(pointer, Args&&...);

	void destroy(pointer);
};

template <class T>
MyAllocator<T>::MyAllocator() {}

template <class T>
MyAllocator<T>::~MyAllocator() {}

template <class T>
typename MyAllocator<T>::pointer MyAllocator<T>::allocate(size_type n) {
	pointer p;

	if ((p = static_cast<pointer>(::operator new(sizeof(value_type) * n))) == nullptr)
	{
		throw std::bad_alloc();
	}
	else
	{
		return p;
	}
}

template <class T>
void MyAllocator<T>::deallocate(pointer p) {
	::operator delete(p);
}


template <class T>
template <class... Args>
void MyAllocator<T>::construct(pointer p, Args&&... args) {
	::new((void*)p) value_type(std::forward<Args>(args)...);
}

template <class T>
void MyAllocator<T>::destroy(pointer p) {
	static_cast<T*>(p)->~T();
}
#ifndef _ALLOCATOR_H_
#define _ALLOCATOR_H_

template <class T>
struct Allocator
{
	using pointer = T*;

	pointer allocate(size_t count)
	{
		pointer new_data = static_cast<pointer>(malloc(sizeof(T) * count));
		if (new_data == nullptr)
		{
			throw std::bad_alloc();
		}
		return new_data;
	}

	void deallocate(pointer p, size_t count) noexcept
	{
		free(p);
	}

	template <typename... Args>
	void construct(pointer np, Args&&... args)
	{
		new (np) T(std::forward<Args>(args)...);
	}

	void destroy(pointer np) noexcept
	{
		np->~T();
	}
};

#endif