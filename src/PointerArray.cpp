/*
 * PointerArray.cpp
 *
 *  Created on: 18 ago 2019
 *      Author: tropi
 */

#include "PointerArray.h"
#include <iostream>



PointerArray::PointerArray() : num{"one","two","three"} {
	// TODO Auto-generated constructor stub
	/*num[0] = "one";
	num[1] = "two";
	num[2] = "three";*/
}

PointerArray::~PointerArray() {
	// TODO Auto-generated destructor stub

}

std::string *PointerArray::getNumbers(){
	return num;
}

char *PointerArray::getArrayMemory(){
	char *charMem = new char[6];

	return charMem;
}

void PointerArray::deleteArrayMemory(char *charMem){
	std::cout << "deleting array memory" << std::endl;
	delete charMem;
}



