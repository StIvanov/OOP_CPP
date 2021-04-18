#pragma once
#include <fstream>

class Class
{
private:
	char* ch;
	int size;

	char* copyStr(const char*);
public: 
	char* getCh();
	int getSize()const;

	void setCh(const char*);

	Class();
	Class(const char*);
	Class(const Class&);
	~Class();

	Class& operator=(const Class&);
	bool operator==(const Class&);

	friend std::ostream& operator<<(std::ostream&, const Class&);

	friend std::istream& operator>>(std::istream&, Class&);
};

