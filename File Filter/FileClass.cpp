
#include "FileClass.h"

void FileClass::doFilter(ifstream &input, ofstream &output) {
	char letter;

	while(!input.eof())
	{
		input.get(letter);
		output.put(transform(letter));
	}
}