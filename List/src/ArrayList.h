/*
 * ArrayList.h
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

namespace adt {
const int MAX_SIZE = 100;

class ArrayList {
public:
	explicit ArrayList(int maxSize = 100);
	virtual ~ArrayList();
	ArrayList(const ArrayList & rhsList);
	bool isFull() const;
	bool isEmpty() const;
	int getMaxSize() const;
	int getLength() const;
	bool isItemAtEquals (int loc, int item) const;
	void printList() const;
	void clearList();
	void retreiveAt (int loc, int& item) const;
	void removeAt (int loc, int item);
	virtual void remove (int item) = 0;
	virtual void insertAt (int loc, int item) = 0;
	virtual void replaceAt (int loc, int item) = 0;
	virtual int search(int item) const  = 0;
	virtual void insertEnd (int item) = 0;

protected:
	int *list;
	int length;
	int maxSize;
};

} /* namespace adt */
#endif /* ARRAYLIST_H_ */
