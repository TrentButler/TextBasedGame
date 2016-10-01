#include "Player.h"
#include "Enemy.h"
#include "Grid.h"

#include <windows.h>
#include <iostream>
using namespace std;

//Player Class Definations


//Player::Player(p_position x_position, p_position y_position)
//{
//
//	x_position.x;
//	y_position.y;
//	
//}





//Room Class Definations


Grid::Grid(bool dark, bool locked, bool emeny, bool weapon, bool north, bool south, bool east, bool west, bool key,const char * printScreen)
{

	dark = g_dark;
	locked = g_locked;
	emeny = g_emeny;
	weapon = g_weapon;
	north = g_north;
	south = g_south;
	east = g_east;
	west = g_west;
	key = g_key;
	printRoom(printScreen);


}



void Grid::printRoom(const char * file_nam)
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






