#pragma once

#include <iostream>
class User
{
private:
	int id;
	char* username;
	char* password;
	char* fName;
	char* lName;

	int sizeString(const char*)const;
	char* copyString(const char*)const;
public:
	//setters
	void setUsername(const char*);
	void setPassword(const char*);
	void setFName(const char*);
	void setLName(const char*);

	int getId()const;
	const char* getUsername()const;
	const char* getPassword()const;
	const char* getFName()const;
	const char* getLName()const;

	User();
	User(int, const char*, const char*, const char*, const char*);
	User(const User&);

	~User();

	User& operator=(const User&);

	friend std::ostream& operator<<(std::ostream&, const User&);
};

