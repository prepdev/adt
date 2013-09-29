/*
 * Array.cpp
 *
 *  Created on: 2013-09-29
 *      Author: luqman
 */

#include "Array.hpp"
#include <cstdlib>
#include <iomanip>

using namespace std;

ostream& operator <<(ostream& output, const Array& list) {

	for (int i = 0 ; i < list.m_size; i++) {
		output << setw(12) << list.m_list[i];
	}
	return output;
}

istream& operator >> (istream& input, Array& list) {

	for (int i = 0 ; i < list.m_size; i++) {
		input >> list.m_list[i];
	}
	return input;
}

Array::Array(int size) : m_list(new int[size]),m_size(size) {
}

Array::Array(const Array& list) : m_size(list.m_size) {

	//Initialize the array
	m_list = new int[m_size];
	for (int i = 0 ; i < m_size; i++)
		m_list[i] = list.m_list[i];
}

Array::~Array() {
	if (m_list) {
		delete [] m_list;
	}
}

const Array& Array::operator =(const Array& list) {

	//Make sure not self assigning
	if (&list != this) {
		if (list.m_size != m_size) {

			//release the previous array
			delete [] m_list;
			m_size = list.m_size;
			m_list = new int[m_size];
		}
		for (int i = 0 ; i < m_size; i++)
			m_list[i] = list.m_list[i];
	}
	return *this;
}

bool Array::operator ==(const Array& list) {

	bool ret = true;
	if (m_size != list.m_size)
		ret = false;
	for (int i = 0; i < m_size; i++)
		if (m_list[i] != list.m_list[i]) {
			ret =false;
			break;
		}

	return ret;
}

bool Array::operator !=(const Array& list) {
	bool ret = false;

	if (m_size != list.m_size)
		ret = true;
	for (int i = 0; i < m_size; i++)
		if (m_list[i] != list.m_list[i]) {
			ret = true;
			break;
		}
	return ret;
}

int Array::operator [](int int1) {
	if (int1 >= m_size || int1 < 0) {
		cerr << "\n Array out of bound";
	}
	return m_list[int1];
}

int Array::getSize() const {
	return m_size;
}


