#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

struct p_position
{

	int x;
	int y;

};






class Player
{

public:
	Player() {}
	
	p_position position;
	Player(p_position p)
	{
		position = p;
	}
	
	


private:
	int p_health = 60;
	int p_attack = 2;
	int p_position;

	
	bool p_flashlight = false;
	bool p_crowbar = false;
	bool p_weaponkey = false;
	bool p_bosskey = false;
	bool p_BFG = false;
	
	
	const char *g_word;

};




