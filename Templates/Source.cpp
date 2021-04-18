#include <iostream>
#include "Arr.h"

using namespace std;

int main() {
	Arr<int> arr;
	Arr<int> arr1;

	arr.add(10);
	arr1.add(15);
	arr.add(9);

	Arr<Arr<int>> mtrx;

	mtrx.add(arr);
	mtrx.add(arr1);

	cout << mtrx.getAt(0).getAt(0) << endl;
}