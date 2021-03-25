#include <iostream>
#include "User.h";
#include "UNI.h";

using namespace std;

int main() {
	UNI uni;

	User u;
	u.setUsername("stfan12");
	uni.addStudent(u);

	u.setUsername("stfan13");
	uni.addStudent(u);

	u.setUsername("stfan14");
	uni.addStudent(u);

	

	cout << u << endl;
}