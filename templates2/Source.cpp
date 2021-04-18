#include<iostream>
#include "Class.h";
#include "Class1.h";
#include "Templ1.h";
#include "Templ2.h";
#include <vector>
#include <string>

using namespace std;

int main() {
	Templ1<Class> test = Templ1<Class>(Class("ivan"));
	Templ1<Class> test1 = Templ1<Class>(Class("ivan"));

	std::filebuf fb;
	fb.open("test.txt", std::ios::out | std::ios::app);
	std::ostream os(&fb);

	os << test << endl;

	fb.close();

	fb.open("test.txt", std::ios::in);
	std::istream is(&fb);

	while (is)
	{
		Class t;
		is >> t;
		cout << t << endl;
	}

	fb.close();
}