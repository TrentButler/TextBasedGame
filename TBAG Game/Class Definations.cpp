#include "Player.h"
#include "Grid.h"
#include "String.h"
#include <windows.h>
#include <iostream>
using namespace std;

int Player::p_North()
{
		
	p_yposition--;
	return p_yposition;

}

int Player::p_South()
{
	p_yposition++;
	return p_yposition;
}

int Player::p_East()
{
	p_xposition++;
	return p_xposition;
}

int Player::p_West()
{
	p_xposition--;
	return p_xposition;
}

Player::Player(int x, int y, bool item)
{
	p_xposition = x;
	p_yposition = y;
	p_item = item;

}

Node::Node(bool north, bool south, bool east, bool west, const char * entry)
{
	g_north = north;
	g_south = south;
	g_east = east;
	g_west = west;
	//g_entry = entry;
}

//Grid::Grid(Grid * test)
//{
//	
//	ex1 = test;
//
//}



//int Player::testFunction(char * test)
//{
//	MyString string = MyString();
//
//	if (string.subString("north") == true)
//	{
//		p_North();
//
//
//	}
//
//	return -1;
//
//}

//
//void Grid::test()
//{
//	// assign player x,y to grid
//	// compare player x,y to grid x,y
//	// create a find position function
//	// "hardset" player x,y value to grid position to position
//
//	
//	Player z = Player();
//	
//
//	char * string = "north";
//	
//
//	if (string == "north" && g_north == true)
//	{
//		z.p_North();
//	}
//
//	if (string == "south"&& g_south == true)
//	{
//		z.p_South();
//	}
//
//	if (string == "east"&& g_east == true)
//	{
//		z.p_East();
//	}
//
//	if (string == "west"&& g_west == true)
//	{
//		z.p_South();
//	}
//	
//	if (string == "Q")
//	{
//		return;
//	}
//
//	else
//	{
//		ex1++;
//	}
//
//
//}

