/*
 * ArrayList.hpp
 *
 *  Created on: 2013-09-30
 *      Author: luqman
 */

#ifndef ARRAYLIST_HPP_
#define ARRAYLIST_HPP_

#include <iostream>

class ArrayList {

	//friend functions
	friend std::ostream& operator <<(std::ostream& output, const ArrayList& list); //extertion
	friend std::istream& operator >>(std::istream& input, ArrayList& list);

public:
	ArrayList(int size = 10); //default size 10
	ArrayList(const ArrayList & list);
	virtual ~ArrayList();

	const ArrayList& operator = (const ArrayList& list);
	bool operator == (const ArrayList &list);
	bool operator != (const ArrayList &list);
	int operator [] (int);
	int getSize() const;
	int getLength() const;
	bool isFull() const;
	bool isEmpty() const;
	bool searchItem (int item);
	virtual void addItem (int item) = 0;
	virtual void insertAt (int pos, int item) = 0;
	void removeAt (int post, int item);
	int popItem ();


protected:
	int *m_list;
	int m_size;
	int m_length;
};

#endif /* ARRAYLIST_HPP_ */

