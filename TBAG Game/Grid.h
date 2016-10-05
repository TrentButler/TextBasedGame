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
	
	Grid(bool north, bool south, bool east, bool west, const char * entry);
	int g_xpos;
	int g_ypos;
	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;
	const char * g_entry;

	


};

class Node:Grid
{

public:
	Node() {}

	Node(int x, int y)
	{
		g_xpos = x;
		g_ypos = y;
	}





};