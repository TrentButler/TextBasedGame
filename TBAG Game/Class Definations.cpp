#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include "String.h"
#include <windows.h>
#include <iostream>
using namespace std;

//Player Class Definations

int Player::p_North()
{
	p_xposition--;
	return p_xposition;

}

int Player::p_South()
{
	p_xposition++;
	return p_xposition;
}

int Player::p_East()
{
	p_yposition++;
	return p_yposition;
}

int Player::p_West()
{
	p_yposition--;
	return p_yposition;
}


Player::Player(int x_position, int y_position, int health, int attack, bool crowbar, bool weaponkey, bool bosskey, bool BFG, bool rock)
{
	p_xposition = x_position;
	p_yposition = y_position;

	p_health = health;
	p_attack = attack;

	
	p_crowbar = crowbar;
	p_weaponkey = weaponkey;
	p_bosskey = bosskey;
	p_BFG = BFG;
	p_rock = rock;

}

Enemy::Enemy(int x_position, int y_position,int health, int attack, bool alive)
{
	e_health = health;
	e_attack = attack;
	e_alive = alive;
	e_xposition = x_position;
	e_yposition = y_position;

}

//void Player::p_gridmove(Player p_move, char * test)
//{
//	MyString a = MyString(test);
//	Grid b = Grid();
//	
//
//	if (a.subString("move north") == true && b.g_north == true && b.g_locked == false && b.g_dark == false)
//	{
//		p_North();
//	}
//	
//	if (a.subString("move south") == true && b.g_south == true && b.g_locked == false && b.g_dark == false)
//	{
//		p_South();
//	}
//
//	if (a.subString("move east") == true && b.g_east == true && b.g_locked == false && b.g_dark == false)
//	{
//		p_East();
//	}
//
//	if (a.subString("move west") == true && b.g_west == true && b.g_locked == false && b.g_dark == false)
//	{
//		p_West();
//	}
//
//
//}




void Player::p_moveTest(Player test, char * z)
{

	Grid z = Grid(test.p_xposition, test.p_yposition);
	
	// Attempt to access type 'Grid' array index and give it the 'x' and 'y' position of 'Player'



}







//Room Class Definations


Grid::Grid(bool dark, bool locked, bool emeny, bool weapon, bool north, bool south, bool east, bool west, bool key/*,const char * printScreen*/)
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
	/*printRoom(printScreen);*/


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






