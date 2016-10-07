#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Grid
{

public:
	Grid()
	{

	}
	Grid(bool n, bool s, bool e, bool w, const char* description) 
	{
		p_description = description;
	}
	
	const char* p_description;

	

};


