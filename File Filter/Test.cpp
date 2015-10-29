/*
1. Ask the user what file they want read
validate

3. Ask the user what the new file should
validate

2. Ask user if they want to Encrypt it, Copy, Upper

javier make it simple for us thank you

*/

#include <fstream>
#include <string>
#include "CopyClass.h"
#include "EncryptClass.h"
#include "UpperCaseClass.h"
using namespace std;

int main() {
	string readF;
	string openF;
	char c; int key = 0;
	ifstream inputFile;
	ofstream outputFile;

	FileClass *file = nullptr;

	cout << "Hello user what file do you want to open? ";
	cin >> openF; cin.ignore(80, '\n');

	inputFile.open(openF);
	while (inputFile.fail())
	{
		cerr << "\tFile cannont be open, try again: ";
		cin >> openF;
		inputFile.open(openF);
	}

	cout << "Thank you, now which file will you like to start? ";
	cin >> readF; cin.ignore(80, '\n');
	
	outputFile.open(readF);
	while (outputFile.fail())
	{
		cerr << "This file cannot be created, please name a different one: ";
		cin >> readF; cin.ignore(80, '\n');
		outputFile.open(readF);
	}

	cout << "Okay what would you like me to do with the file?" << endl
		<< "\tEncrypt" << endl
		<< "\tUppercase" << endl
		<< "\tCopy " << endl
		<< "Choice: ";
	cin >> c; cin.ignore(80, '\n');
	c = toupper(c);
	
	if (c == 'E')
	{
		cout << "What is the encryption key? ";
		cin >> key; cin.ignore(80, '\n');
	}

	switch (c)
	{
	case 'E': file = new EncryptClass(key);
		file->doFilter(inputFile, outputFile);
		break;
		
	case 'C': file = new CopyClass();
		file->doFilter(inputFile, outputFile);
		break;

	case 'U': file = new UpperCaseClass();
		file->doFilter(inputFile, outputFile);
		break;
	default:
		cerr << "Wrong information, closing program" << endl;
		system("pause");
		delete file;
		return -1;
	}

	cout << "\nOkay transform should be complete, thank you!";
	cin.get();

	delete file;
	inputFile.close();
	outputFile.close();
	return 0;
}

