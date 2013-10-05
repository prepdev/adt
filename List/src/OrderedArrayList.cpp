/*
 * OrderedArrayList.cpp
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#include "OrderedArrayList.h"
#include <iostream>
using namespace std;

namespace adt {

OrderedArrayList::OrderedArrayList(int maxSize) :
		ArrayList(maxSize) {
}

OrderedArrayList::~OrderedArrayList() {
}

void OrderedArrayList::insertAt(int loc, int item) {

	if (isFull()) {
		cout <<endl <<"List is full";
	}
	else if (loc < 0 || loc >= maxSize) {
		cout <<endl <<"Location passed is out of bound";
	}
	else {
		if (list[loc] > item || list[loc] < item) {
			insertEnd(item);
		}
		else {
			for (int i = length; i > loc; i++) {
				list[length] = list[length-1];
			}
			list[loc] = item;
			length++;
		}
	}

}

void OrderedArrayList::replaceAt(int loc, int item) {

	if (loc < 0 || loc >= maxSize) {
		cout <<endl <<"Location is out of bound";
	}
	else {
		if (loc == 0) {
			insertEnd(item);
		}
		else if ( list[loc - 1] > item) {
			list[loc] = list[loc -1];
			list[loc -1] = item;
		}
	}
}

void OrderedArrayList::remove(int item) {
	int loc = search(item);
	cout <<endl <<"location " <<loc;
	if (-1 == loc) {
		cout <<endl <<"Unable to remove item";
	}
	else {
		removeAt(loc,item);
	}
}

int OrderedArrayList::search(int item) const {
	//We know the list is ordered use Binary Search

	int low = 0;
	int high = length - 1;
	int mid = (low + mid) / 2;
	bool found = false;

	if (item < list[0] || item > list[length - 1]) {
		cout << endl << "Item does not exist in the list";
		return -1;
	}

	else if (!isEmpty()) {

		while (low <= high && !found) {
			if (list[mid] == item) {
				found = true;
			} else if (list[mid] > low) {
				low = mid + 1;
			} else if (list[mid] < low) {
				high = mid - 1;
			}
		}
	}
	else {
		cout <<endl <<"List is empty";
	}

	return (found) ? mid : -1;
}

void OrderedArrayList::insertEnd(int item) {

	if (isEmpty()) {
		list[length++] = item;
	} else if (isFull()) {
		cout << endl << "List is Full";
	} else {

		//Find the largest or equal first
		int loc = 0;
		bool found = false;
		while (loc < length && !found) {
			if (list[loc] >= item) {
				found = true;
			} else {
				loc++;
			}
		}

		//Insert now
		for (int i = length; i > loc; i--) {
			list[i] = list[i - 1];
		}
		list[loc] = item;
		length++;
	}

}

} /* namespace adt */
