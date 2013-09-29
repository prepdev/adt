//============================================================================
// Name        : DynamicArray.cpp
// Author      : Luqman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Array.hpp"
using namespace std;

int main() {

	Array list1(7); //7 items
	Array list2; //default 10 items

	cout << endl << "Size of List1 " << list1.getSize();
	cout << endl << "Size of List2 " << list2.getSize();

	cout << endl << "Enter the items in the lists ";
	cin >> list1;
	cout << endl << "List 2 ";
	cin >> list2;

	cout << endl << "Outputting list2";
	cout << list1 << endl << list2;

	if (list1 == list2) {
		cout << endl << "List 1  == list2";
	}
	else if (list1 != list2) {
		cout << endl << "List 1  != list2";
	}

	Array list3(list1);
	Array list4 = list2;
	if (list1 == list3) {
		cout << endl << "List 1  == list3";
	}
	if (list2 == list4) {
			cout << endl << "List 2  == list4";
	}


	return 0;
}
