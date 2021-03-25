#pragma once
#include<iostream>
using namespace std;

struct smp {
	int v;
	smp(int v) {
		this->v = v;
	}
};

class Sample
{
public:
	smp* ptr;
	char* name;
	Sample(const char*);
	~Sample();
};

