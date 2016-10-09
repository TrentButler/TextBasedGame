#pragma once
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;


void Grid::printRoom(char * file_nam)
{

	string r_string;
	ifstream r_file;
	r_file.open(file_nam);

	while (!r_file.eof())
	{
		getline(r_file, r_string);
		cout << r_string << '\n';
	}
	r_file.close();

}