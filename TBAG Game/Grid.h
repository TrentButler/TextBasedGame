#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Position
{
	int x;
	int y;
};

enum Direction
{
	North,
	South,
	East,
	West,
};

class Node
{

	Position n_pos;

	Node() {};
	Node(bool north, bool south, bool east, bool west, const char * entry);
	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;





};


class Grid
{

public:
	Grid()
	{

	}
	Grid(bool n, bool s, bool e, bool w, const char* description) : p_description(description)
	{
		
	}
	
	const char* p_description;

};


