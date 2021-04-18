#pragma once

template <class T>
class Templ2
{
private:
	T* obj;
public:
	Templ2();
	Templ2(const T&);

	T getObj()const;
	char* getCh();
};

template<class T>
inline Templ2<T>::Templ2()
{
	obj = nullptr;
}

template<class T>
inline Templ2<T>::Templ2(const T& copy)
{
	if (obj == nullptr) obj = new T();
	*obj = copy;
}

template<class T>
inline T Templ2<T>::getObj() const
{
	if (obj == nullptr) return T();
	return *obj;
}

template<class T>
inline char* Templ2<T>::getCh()
{
	return obj.getCh();
}
