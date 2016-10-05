#pragma once
#include <windows.h>
#include <iostream>
using namespace std;




class Player
{

public:
	Player() {}
	
	
	
	Player(int x_position, int y_position, int health, int attack, bool crowbar, bool weaponkey, bool bosskey, bool BFG, bool rock);
	
	int p_North();
	int p_South();
	int p_East();
	int p_West();
	
	/*void p_gridmove(Player, char *);*/

	void p_moveTest(Player, char *);
	


private:
	int p_health;
	int p_attack;
	int p_xposition;
	int p_yposition;
	
	bool p_crowbar;
	bool p_weaponkey;
	bool p_bosskey;
	bool p_BFG;
	bool p_rock;
	const char *g_word;

};


class Enemy:Player
{

public:
	Enemy() {};
	Enemy(int,int,int health, int attack, bool alive);
	
private:
	int e_health;
	int e_attack;
	int e_xposition;
	int e_yposition;
	bool e_alive;
	
};

