#include "Array.h"
#include <iostream>

template<class T>
Array<T>::Array()
{
	arr = new T[size];
}

template<class T>
Array<T>::~Array()
{
	delete[] arr;
}

template<class T>
void Array<T>::add(const T& el)
{
	arr[currentIdx++] = el;
}

template<class T>
int Array<T>::getSize() const
{
	return size;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& copy)
{
	delete[] this->arr;

	this->size = copy.size;
	this->currentIdx = copy.currentIdx;
	this->expandWith = copy.expandWith;

	this->arr = new int[this->size];
	for (int i = 0; i < this->currentIdx; i++) {
		this->arr[i] = copy.arr[i];
	}
	return *this;
}

template<class T>
T Array<T>::operator[](int idx)
{
	if(idx >= currentIdx) return NAN;
	return arr[idx];
}
