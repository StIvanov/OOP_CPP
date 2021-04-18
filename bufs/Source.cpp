#include <iostream>
#include "Write.h";

using namespace std;

int main() {
	Write w("test.txt");

	w.WriteLine("test 123");
}