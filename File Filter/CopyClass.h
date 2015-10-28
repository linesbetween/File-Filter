
#ifndef COPY_CLASS_H
#define COPY_CLASS_H

#include "FileClass.h"
using namespace std;

class CopyClass :public FileClass {
public: 
	virtual char transform(char letter) {
		return letter;
	}
};

#endif