/*
 * UnOrderedArrayList.h
 *
 *  Created on: Oct 5, 2013
 *      Author: lahmad
 */

#ifndef UNORDEREDARRAYLIST_H_
#define UNORDEREDARRAYLIST_H_

#include "ArrayList.h"

namespace adt {

class UnOrderedArrayList : public ArrayList {

public:
	explicit UnOrderedArrayList(int maxSize);
	virtual ~UnOrderedArrayList();
	virtual void insertAt (int loc, int item);
	virtual void replaceAt (int loc, int item);
	virtual void remove (int item);
	virtual int search(int item) const;
	virtual void insertEnd (int item);
};

} /* namespace adt */
#endif /* UNORDEREDARRAYLIST_H_ */
