#pragma once
#include <fstream>

template <class T>
class Templ1
{
private:
	T* obj;
public: 
	Templ1();
	Templ1(const T&);

	T getObj()const;
	char* getCh();

	bool operator==(const Templ1<T>&);

	friend std::ostream& operator<<(std::ostream& os, const Templ1& other) {
		os << *other.obj;
		return os;
	};
};

template<class T>
inline Templ1<T>::Templ1()
{
	obj = nullptr;
}

template<class T>
inline Templ1<T>::Templ1(const T& copy)
{
	if (obj == nullptr) obj = new T("asdas");
	*obj = copy;
}

template<class T>
inline T Templ1<T>::getObj() const
{
	if (obj == nullptr) return T();
	return *obj;
}

template<class T>
inline char* Templ1<T>::getCh()
{
	return obj.getCh();
}

template<class T>
inline bool Templ1<T>::operator==(const Templ1<T>& other)
{
	if (this == &other) return true;

	return *obj == *other.obj;
}

