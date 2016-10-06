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

Grid::Grid(bool north, bool south, bool east, bool west, const char * entry)
{
	g_north = north;
	g_south = south;
	g_east = east;
	g_west = west;
	g_entry = entry;



}

//int testFunction(char * test)
//{
//	Player player = Player();
//	Grid grid = Grid();
//	MyString string = MyString();
//
//	player.p_xposition
//
//
//
//}






