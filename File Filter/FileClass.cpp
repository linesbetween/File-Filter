
#include "FileClass.h"
#include <iostream>
using namespace std;
void FileClass::doFilter(ifstream &input, ofstream &output) {
	char letter;

	while(!input.eof())
	{
		input.get(letter);
		if (!(input)) break;
		output.put(transform(letter));
	}
}