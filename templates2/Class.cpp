#include "Class.h"

char* Class::copyStr(const char* str)
{
	if (str == nullptr) return nullptr;

	int s = 0;
	while (str[s] != '\0') s++;
	
	char* temp = new char[s + 1];
	for (int i = 0; i < s; i++)
		temp[i] = str[i];
	temp[s] = '\0';

	return temp;
}

char* Class::getCh()
{
	return copyStr(ch);
}

int Class::getSize() const
{
	return size;
}

void Class::setCh(const char* str)
{
	ch = copyStr(str);
}

Class::Class()
{
	ch = nullptr;
	size = 0;
}

Class::Class(const char* ch)
{
	if (ch == nullptr) {
		size = 0;
		this->ch = nullptr;
		return;
	}
	this->ch = copyStr(ch);

	size = 0;
	while (ch[size] != '\0') size++;
}

Class::Class(const Class& copy)
{
	if (&copy == nullptr) {
		this->ch = nullptr;
		this->size = 0;
		return;
	};
	this->ch = copyStr(copy.ch);
	this->size = copy.size;
}

Class::~Class()
{
	delete[] ch;
}

Class& Class::operator=(const Class& copy)
{
	if (this == &copy)
		return *this;

	this->ch = copyStr(copy.ch);
	this->size = copy.size;

	return *this;
}

bool Class::operator==(const Class& other)
{
	if (this == &other)
		return true;

	if (size != other.size) return false;

	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == other.ch[i]) continue;

		return false;
	}

	return true;
}

std::ostream& operator<<(std::ostream& os, const Class& other)
{
	os <<"ch = "<< other.ch << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Class& other)
{
	char* niz = new char[255];
	is.getline(niz, 255);

	other.setCh(niz);
	return is;
}
