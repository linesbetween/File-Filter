
#ifndef FILE_FILTER_H
#define FILE_FILTER_H

#include <fstream>
using namespace std;

class FileClass {
public:
	void doFilter(ifstream &input, ofstream &output);
	virtual char transform(char letter) = 0;
};

#endif
