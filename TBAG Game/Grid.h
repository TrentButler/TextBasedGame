#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Grid
{

public:
	Grid() {};
	
	Grid(bool n, bool s, bool e, bool w, bool key , const char* description) 
	{
		p_description = description;
		g_north = n;
		g_south = s;
		g_east = e;
		g_west = w;
		g_key = key;
				

	}
	
	void printRoom(char * file_nam);
	




	const char* p_description;
	bool g_key;
	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;
	

};

