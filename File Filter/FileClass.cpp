
#include "FileClass.h"

void FileClass::doFilter(ifstream &input, ofstream &output) {
	char letter;

	while(!input.eof())
	{
		input.get(letter);
		transform(letter);
		output.put(letter);
	}
}