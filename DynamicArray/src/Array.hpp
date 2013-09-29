/*
 * Array.hpp
 *
 *  Created on: 2013-09-29
 *      Author: luqman
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>

/*!
 * Dynamic Array Implementation
 * Implements operator overloading
 * Copy Constructor
 */
class Array {

//friend functions
	friend std::ostream& operator << (std::ostream& output, const Array& list); //extertion
	friend std::istream& operator >> (std::istream& input, Array& list);

public:
	Array(int size = 10);  //default constructor size is 10
	Array(const Array & list);
	virtual ~Array();

	const Array& operator = (const Array& list);
	bool operator == (const Array &list);
	bool operator != (const Array &list);
	int operator [] (int);
	int getSize() const;

private:
	int *m_list; //Dynamic Array
	int m_size;
};

#endif /* ARRAY_HPP_ */
