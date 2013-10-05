/*
 * test.cpp
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#include "UnOrderedArrayList.h"
#include "OrderedArrayList.h"

#include <iostream>

using namespace adt;
using namespace std;

int main(int argc, char **argv) {

	OrderedArrayList list(6);
	list.insertEnd(23);
	list.insertEnd(12);
	list.insertEnd(1);
	list.printList();

	list.insertAt(0,2);
	list.printList();
	list.replaceAt(0,100);

	list.printList();
	list.replaceAt(2,1);
	list.printList();

	list.remove(100);
	list.printList();
}
