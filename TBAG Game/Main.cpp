#include "Player.h"
#include "Enemy.h"
#include "Grid.h"

#include <windows.h>
#include <iostream>
using namespace std;



int main()
{
	
	p_position p = { 4, 4 };
	p_position z = { 0,0 };
	Player Trash = Player(p);
	Player Helpme = Player(z);

	


	system("pause");
	return 1;
}