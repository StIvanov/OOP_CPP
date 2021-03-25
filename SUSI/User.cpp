#include "User.h"
#include <iostream>

using namespace std;

int User::sizeString(const char* str) const
{
    int s = 0;
    if (str == nullptr) return s;

    while (str[s] != '\0') s++;

    return s;
}

char* User::copyString(const char* str) const
{
    if (str == nullptr) return nullptr;

    int n = sizeString(str);
    char* newStr = new char[n + 1];

    for (int i = 0; str[i] != '\0'; i++) newStr[i] = str[i];

    newStr[n] = '\0';

    return newStr;
}

void User::setUsername(const char* str)
{
    username = copyString(str);
}

void User::setPassword(const char* str)
{
    password = copyString(str);
}

void User::setFName(const char* str)
{
    fName = copyString(str);
}

void User::setLName(const char* str)
{
    lName = copyString(str);
}

int User::getId() const
{
    return id;
}

const char* User::getUsername() const
{
    return copyString(username);
}

const char* User::getPassword() const
{
    return copyString(password);
}

const char* User::getFName() const
{
    return copyString(fName);
}

const char* User::getLName() const
{
    return copyString(lName);
}

User::User()
{
    username = nullptr;
    password = nullptr;
    fName = nullptr;
    lName = nullptr;
}

User::User(int id, const char* username, const char* password, const char* fName, const char* lName)
{
    this->id = id;
    setUsername(username);
    setUsername(password);
    setUsername(fName);
    setUsername(lName);
}

User::User(const User& copy)
{
    cout << "Copy contructor for User\n";
    id = -1;
    username = copyString(copy.username);
    password = copyString(copy.password);
}

User::~User()
{
    cout << "Destructor for User\n";
    delete[] username;
    delete[] password;
    delete[] fName;
    delete[] lName;
}

User& User::operator=(const User& user)
{
    cout << "Operator = for User\n";
    if (this == &user) return *this;

    this->id = 0;
    this->username = copyString(user.username);
    this->password = copyString(user.password);
    this->fName = copyString(user.fName);
    this->lName = copyString(user.lName);

    return *this;
}

ostream& operator<<(ostream& os, const User& u)
{
    os << u.getUsername() << " Custom print\n";
    return os;
}

