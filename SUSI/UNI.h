#pragma once
#include "User.h";
class UNI
{
private: 
	const int studentBr = 1;
	char* name;
	User* rector;
	int studentSize;
	int lastStudentIdx;
	User* students = nullptr;
	User* teachers;

	int sizeString(const char*)const;
	char* copyString(const char*)const;
	void resize();
public:
	void addStudent(User& user);
	UNI();
	~UNI();
};

