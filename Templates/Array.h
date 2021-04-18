#pragma once

template<class T>
class Array
{
public:
	Array();
	~Array();
	
	void add(const T&);
	int getSize()const;
	Array& operator=(const Array&);
	T operator[](int idx);
private:
	int size = 10;
	int currentIdx = 0;
	int expandWith = 10;
	T* arr;
};