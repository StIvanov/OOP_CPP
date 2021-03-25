#include "Sample.h"

Sample::Sample(const char* name)
{
	ptr = new smp(12);

	int n = 0;

	while (name[n] != '\0') {
		n++;
	}

	this->name = new char[n + 1];

	for (int idx = 0; name[idx] != '\0'; idx++) {
		this->name[idx] = name[idx];
	}

	this->name[n] = '\0';
}

Sample::~Sample()
{
	delete[] name;
	delete ptr;
}
