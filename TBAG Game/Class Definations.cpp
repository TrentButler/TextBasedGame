#include "Player.h"
#include "Grid.h"
#include "String.h"
#include <windows.h>
#include <iostream>
using namespace std;

//Room Class Definations

Grid::Grid(bool north, bool south, bool east, bool west, const char * entry)
{
	g_north = north;
	g_south = south;
	g_east = east;
	g_west = west;

	g_entry = entry;
	


}



//Player Class Definations

int Player::p_North()
{
	
	return p_xposition;

}

int Player::p_South()
{
	
	return p_xposition;
}

int Player::p_East()
{
	
	return p_yposition;
}

int Player::p_West()
{
	
	return p_yposition;
}


Player::Player(int x, int y, bool item)
{
	p_xposition = x;
	p_yposition = y;
	
	p_item = item;
	

}


