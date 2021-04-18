#pragma once

template<class T>
class Arr
{
public:
	static int id;
	static int getId();
	Arr();
	Arr(const Arr&);
	~Arr();

	void add(const T&);
	T getAt(int idx)const;

	T operator[](int idx);
	Arr& operator=(const Arr&);
private:
	int size = 10;
	int idx = 0;
	int br = 10;
	T* arr;
};

template<class T>
inline static int Arr<T>::getId()
{
	return id;
}

template<class T>
inline Arr<T>::Arr()
{
	arr = new T[size];
}

template<class T>
inline Arr<T>::Arr(const Arr& copy)
{
	delete[] this->arr;

	this->size = copy.size;
	this->idx = copy.idx;
	this->br = copy.br;

	this->arr = new T[this->size];
	for (int i = 0; i < this->idx; i++) {
		this->arr[i] = copy.arr[i];
	}
}

template<class T>
inline Arr<T>::~Arr()
{
	delete[] arr;
}

template<class T>
inline void Arr<T>::add(const T& el)
{
	if (idx > size) {
		T* temp = new T[idx];
		for (int i = 0; i < idx; i++) {
			temp[i] = arr[i];
		}

		delete[] arr;

		size += br;
		arr = new T[size];

		for (int i = 0; i < idx; i++) {
			arr[i] = temp[i];
		}

		delete[] temp;
	}

	arr[idx++] = el;

	id++;
}

template<class T>
inline T Arr<T>::getAt(int idx) const
{
	return arr[idx];
}

template<class T>
inline T Arr<T>::operator[](int idx)
{
	return getAt(idx);
}

template<class T>
inline Arr<T>& Arr<T>::operator=(const Arr<T>& copy)
{
	delete[] this->arr;

	this->size = copy.size;
	this->idx = copy.idx;
	this->br = copy.br;

	this->arr = new T[this->size];
	for (int i = 0; i < this->idx; i++) {
		this->arr[i] = copy.arr[i];
	}
	return *this;
}

template<class T>
int Arr<T>::id = 0;


