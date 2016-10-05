#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Grid
{

public:
	Grid() {}
	Grid(int x, int y)
	{
		xPosition = x;
		yPosition = y;
	}
	
	
	
	Grid(bool dark, bool locked, bool enemy, bool weapon, bool north, bool south, bool east, bool west, bool key/*,const char **/);
	
	void printRoom(const char *);

	int xPosition;
	int yPosition;
	bool g_dark;
	bool g_locked;
	bool g_emeny;
	bool g_weapon;
	bool g_key;

	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;


	


};

