/*
 * ArrayList.cpp
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#include "ArrayList.h"
#include <iostream>
#include <iomanip.h>

using namespace std;

namespace adt {


ArrayList::ArrayList(int maxSize)  {
	if (maxSize >= 0) {
		this->maxSize = maxSize;
	} else {
		this->maxSize = MAX_SIZE;
	}
	length = 0;
	list = new int[this->maxSize];
}

ArrayList::~ArrayList() {
	delete [] list;
}

 ArrayList::ArrayList(const ArrayList& rhsList) {

	//Make sure its not self referenced
	if (this != &rhsList) {

		//delete the previous if any
		delete [] list;
		maxSize = rhsList.maxSize;
		length = rhsList.length;
		list = new int[maxSize];

		for (int i = 0; i < length; i++) {
			list[i] = rhsList.list[i];
		}
	}
}

bool ArrayList::isFull() const {
	return (length == maxSize);
}

bool ArrayList::isEmpty() const {
	return (length == 0);
}

int ArrayList::getMaxSize() const {
	return maxSize;
}

int ArrayList::getLength() const {
	return length;
}

bool ArrayList::isItemAtEquals(int loc, int item) const {
	bool ret = false;

	if (loc < 0 || loc >= length) {
		cout << endl <<"\n Location Passed is out of bound";
	}
	else {
		ret =  (list[loc] == item);
	}
	return ret;
}

void ArrayList::printList() const {
	if (isEmpty()) {
		cout <<endl <<"List is empty nothing to print";
	}
	else {
		for (int i = 0; i < length; i++) {
			cout << setw(10) <<"List["<<i<<"]"<<" : " <<setw(10) <<list[i]<<endl;
		}
		cout <<endl;
	}
}

void ArrayList::clearList()  {
	length = 0;
}

void ArrayList::retreiveAt(int loc, int& item) const {
	if (loc < 0 || loc >= length ) {
		cout <<endl <<"Location Passed is out of bound";
	}
	else {
		item = list[loc];
	}
}

void ArrayList::removeAt(int loc, int item) {
	if (loc < 0 || loc >= length) {
		cout <<endl <<"Location Passed are Out of bound";
	}
	else {
		for (int i = loc; i < length -1 ; i++) {
			list[i] = list[i+1];

		length --;
	}
}
}

} /* namespace adt */
