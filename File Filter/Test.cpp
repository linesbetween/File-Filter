/*
1. Ask the user what file they want read
validate

3. Ask the user what the new file should
validate

2. Ask user if they want to Encrypt it, Copy, Upper

jaivier make it simple for us thank you

*/

#include <fstream>
#include <string>
#include "CopyClass.h"
#include "EncryptClass.h"
#include "UpperCaseClass.h"
using namespace std;

int main() {
	string readF = "readFile.txt";
	string saveEncrypt = "EncryptFile.txt";
	string saveCopy = "CopyFile.txt";
	string saveUpperCase = "UpperFile.txt";

	ifstream inputFile(readF);
	ofstream outputFile(saveUpperCase);

	UpperCaseClass file;

	file.doFilter(inputFile, outputFile);

	inputFile.close();
	cin.get();
	return 0;
}

