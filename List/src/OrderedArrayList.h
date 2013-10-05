/*
 * OrderedArrayList.h
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#ifndef ORDEREDARRAYLIST_H_
#define ORDEREDARRAYLIST_H_

#include "ArrayList.h"

namespace adt {

class OrderedArrayList: public ArrayList {
public:
	explicit OrderedArrayList(int maxSize);
	virtual ~OrderedArrayList();
	virtual void insertAt(int loc, int item);
	virtual void replaceAt(int loc, int item);
	virtual void remove(int item);
	virtual int search(int item) const;
	virtual void insertEnd(int item);
};

} /* namespace adt */
#endif /* ORDEREDARRAYLIST_H_ */
