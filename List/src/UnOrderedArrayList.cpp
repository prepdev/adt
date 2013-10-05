/*
 * UnOrderedArrayList.cpp
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#include "UnOrderedArrayList.h"
#include <iostream>
using namespace std;
namespace adt {

UnOrderedArrayList::UnOrderedArrayList(int maxSize) : ArrayList(maxSize) {
}

UnOrderedArrayList::~UnOrderedArrayList() {
}

void UnOrderedArrayList::insertAt(int loc, int item) {
	if (loc < 0 || loc >= maxSize) {
		cout <<endl <<"Location Passed is Out of bound";
	}
	else if (!isFull())
	{
		for (int i = length ; i > loc ; i--) {
			list[i] = list[i-1];
		}
		//add the item at loc
		list[loc] = item;
		length++;
	}
	else {
		cout <<endl <<"ArrayList is full no place to add new item";
	}
}

void UnOrderedArrayList::replaceAt(int loc, int item) {
	if (loc < 0 || loc >= length) {
		cout <<endl << "Location Passed is Out of bound";
	}
	else {
		list[loc] = item;
	}
}

void UnOrderedArrayList::remove(int item) {
	int loc = search(item);
	if (-1 == loc) {
		cout <<endl <<"Item passed does not exist in the ArrayList";
	}
	else {
		removeAt(loc,item);
	}
}

int UnOrderedArrayList::search(int item) const {

	bool found = false;
	int i = 0;

	if (!isEmpty()) {
		while (i < length && !found) {
			if (list[i] == item) {
				found = true;
			} else
				i++;
		}
	}
	else {
		cout <<endl <<"ArrayList is empty nothing to search";
	}
	return (found) ? i : -1;
}

void UnOrderedArrayList::insertEnd(int item) {
	if (!isFull()) {
		list[length] = item;
		length++;

	} else {
		cout <<endl <<"List is full";
	}
}

} /* namespace adt */
