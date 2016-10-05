#pragma once
#include <windows.h>
#include <iostream>
using namespace std;




class Player
{

public:
	Player() {}
	Player(int x, int y, bool item);
	
	int p_North();
	int p_South();
	int p_East();
	int p_West();
	
private:
	
	int p_xposition;
	int p_yposition;
	bool p_item;
	

};


