//============================================================================
// Name        : arrayDeclaration.cpp
// Author      : Angel Ale
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "PointerArray.h"
using namespace std;

int main() {
		PointerArray arr;

		string *s1 = arr.getNumbers();

		for(int i = 0; i < 3; i++){
			std::cout << *s1 << std::endl;
			s1++;
		}

		char *s2 = arr.getArrayMemory();

		s2[0] = 'a';
		s2[1] = 'b';
		s2[2] = 'c';
		s2[3] = 'd';
		s2[4] = 'e';
		s2[5] = '6';

		for(int i=0;i<6;i++ ){
			std::cout << *s2 << std::endl;
			s2++;
		}

		arr.deleteArrayMemory(s2);
	return 0;
}
