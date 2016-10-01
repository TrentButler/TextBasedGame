#include "Player.h"
#include "Enemy.h"
#include "Grid.h"

#include <windows.h>
#include <iostream>
using namespace std;



int main()
{
	Grid a = Grid();
	p_position p = { 4, 4 };
	p_position z = { 0,0 };
	Player Trash = Player(p);
	Player Helpme = Player(z);
	

	Grid room1 = Grid{ 0,0,0,1,0,1,0,0,0,"room1.txt",};





	Grid testArray[6][5] =
	{

		{ room1,room2,room3,room4,room5,room6 },
		{ room7,room8,room9,room10,room11,room12 },
		{ room13,room14,room15,room16,room17,room18 },
		{ room19,room20,room21,room22,room23,room24 },
		{ room25,room26,room27,room28,room29,room30 },


	};





	


	system("pause");
	return 1;
}