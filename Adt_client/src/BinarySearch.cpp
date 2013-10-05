/*
 * BinarySearch.cpp
 *
 *  Created on: 2013-09-30
 *      Author: luqman
 */

#include "BinarySearch.hpp"
#include <iostream>

using namespace std;

int BinarySearch::binarySearch_iterative(const ArrayList& list, int key) {

	// Get the max size
	int n = list.getSize();
	int low = 0;
	int high = n - 1;
	int ret = -1;
	int mid = (high + low) / 2;

	while (low <= high) {

		if (list[mid] == key) {
			ret = mid;
			break;
		}
		else if (list[mid] > key) {
			high = mid -1;
		}
		else if (list[mid < key]) {
			low = mid +1;
		}
	}
	return ret;
}

