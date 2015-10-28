
#ifndef ENCRYPT_CLASS_H
#define ENCRYPT_CLASS_H

#include "FileClass.h"
#include <iostream>
using namespace std;

class EncryptClass :public FileClass {
private:
	int key;
public:
	EncryptClass(int num) {
		key = num;
	}
	virtual char transform(char letter) {
		letter += char(key);
		//cout << letter;
		return letter;
	}
};

#endif