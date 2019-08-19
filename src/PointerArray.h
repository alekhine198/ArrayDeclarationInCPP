/*
 * PointerArray.h
 *
 *  Created on: 18 ago 2019
 *      Author: tropi
 */

#ifndef POINTERARRAY_H_
#define POINTERARRAY_H_
#include <string>

class PointerArray {
	std::string num[3];
public:
	PointerArray();
	virtual ~PointerArray();
	std::string *getNumbers();
	char *getArrayMemory();
	void deleteArrayMemory(char *charMem);
};

#endif /* POINTERARRAY_H_ */
