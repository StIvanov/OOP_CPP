#include "UNI.h"
#include <iostream>

using namespace std;
int UNI::sizeString(const char*) const
{
    return 0;
}

char* UNI::copyString(const char*) const
{
    return nullptr;
}

void UNI::resize()
{
    if (lastStudentIdx < studentSize) return;
    
    User* temp = new User[studentSize];
    for (int i = 0; i < lastStudentIdx; i++) {
        temp[i] = students[i];
    }

    studentSize += studentBr;
    delete[] students;

    students = new User[studentSize];
    for (int i = 0; i < lastStudentIdx; i++) {
        students[i] = temp[i];
    }

    delete[] temp;
}

void UNI::addStudent(User& user)
{
    resize();

    students[lastStudentIdx++] = user;
}

UNI::UNI()
{
    students = new User[studentSize];
    lastStudentIdx = 0;
}

UNI::~UNI()
{
    delete[] students;
    delete rector;
    delete[] teachers;
}
