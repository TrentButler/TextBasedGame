#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString() {}
	MyString(char *test);

	int Length();
	bool Compare(MyString a);
	char characterAtIndex(int);
	char * Append(MyString a);
	char * Prepend(MyString a);
	int stringlength(char *z);
	const char * constChar();
	bool subString(char *);
	char * ToLower();
	char * ToUpper();
	char * stringInput();
	
private:

	char t_data[266];
};







