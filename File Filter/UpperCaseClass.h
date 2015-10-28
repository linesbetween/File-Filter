#ifndef UPPER_CASE_CLASS_H
#define UPPER_CASE_CLASS_H

#include "FileClass.h"
using namespace std;

class UpperCaseClass :public FileClass {
public:
	virtual char transform(char letter) {
		return toupper(letter);
	}
};

#endif