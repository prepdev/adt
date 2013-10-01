/*
 * ArrayList.cpp
 *
 *  Created on: 2013-09-30
 *      Author: luqman
 */

#include "../public/ArrayList.hpp"
#include <iomanip>

using namespace std;


ostream& operator << (ostream& output, const ArrayList& list) {

	for (int i = 0 ; i < list.m_size; i++) {
		output << setw(12) << list.m_list[i];
	}
	return output;
}

istream& operator >> (istream& input, ArrayList& list) {

	for (int i = 0 ; i < list.m_size; i++) {
		input >> list.m_list[i];
	}
	return input;
}

ArrayList::ArrayList(int size) : m_list(new int[size]),m_size(size) {
}

ArrayList::ArrayList(const ArrayList& list) : m_size(list.m_size) {
	//Initialize the array
	m_list = new int[m_size];
	for (int i = 0 ; i < m_size; i++)
		m_list[i] = list.m_list[i];
}

ArrayList::~ArrayList() {
	if (m_list) {
		delete [] m_list;
	}
}

const ArrayList& ArrayList::operator =(const ArrayList& list) {

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

bool ArrayList::operator ==(const ArrayList& list) {

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

bool ArrayList::operator !=(const ArrayList& list) {
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

int ArrayList::operator [](int int1) {
	if (int1 >= m_size || int1 < 0) {
		cerr << "\n Array out of bound";
	}
	return m_list[int1];
}

int ArrayList::getSize() const {
	return m_size;
}


