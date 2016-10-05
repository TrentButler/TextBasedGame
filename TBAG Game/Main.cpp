#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include "String.h"

#include <windows.h>
#include <iostream>
using namespace std;



int main()
{

	/*p_position p_start = { 4, 4 };*/

	
	

	Player player1 = Player(4, 4, 60, 2, 0, 0, 0, 0,0);
	Enemy enemy1 = Enemy(0, 2, 60, 20, 1);
	Enemy enemy2 = Enemy(0, 3, 60, 20, 1);
	Enemy enemy3 = Enemy(4, 1, 60, 20, 1);
	Enemy Boss = Enemy(4, 5, 100, 40, 1);
	

	Player run = Player();

	Grid room1 = Grid{0,0,0,1,0,1,0,0,0/*,"room1.txt"*/,};
	Grid room2 = Grid{1,0,0,0,0,0,1,1,0};
	Grid room3 = Grid{0,0,1,0,0,0,1,1,0};
	Grid room4 = Grid{0,0,1,0,0,0,1,1,0};
	Grid room5 = Grid{0,0,0,0,0,0,1,1,0};
	Grid room6 = Grid{1,1,0,0,0,0,0,1,1}; //boss key
	Grid room7 = Grid{0,0,0,0,1,1,1,0,0};
	Grid room8 = Grid{0,0,0,0,0,1,1,1,0};
	Grid room9 = Grid{0,0,0,0,0,1,1,1,1}; // generator room
	Grid room10 = Grid{0,0,0,0,0,1,1,1,0};
	Grid room11 = Grid{0,0,0,0,0,1,1,1,0};
	Grid room12 = Grid{0,1,0,1,0,1,0,0,0}; // weapon room
	Grid room13 = Grid{0,0,0,0,1,1,1,0,0};
	Grid room14 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room15 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room16 = Grid{0,0,0,0,1,1,1,1,0}; // kitchen 
	Grid room17 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room18 = Grid{1,0,0,0,1,1,0,1,0};
	Grid room19 = Grid{0,0,1,0,1,1,1,0,0};
	Grid room20 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room21 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room22 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room23 = Grid{0,0,0,0,1,1,1,1,0};
	Grid room24 = Grid{0,0,0,0,1,0,0,1,0};
	Grid room25 = Grid{0,0,0,0,1,0,1,0,1}; // weapon key room
	Grid room26 = Grid{0,0,1,0,1,0,1,1,0};
	Grid room27 = Grid{0,0,0,0,1,0,1,1,0};
	Grid room28 = Grid{0,0,0,1,1,0,1,1,0};
	Grid room29 = Grid{0,0,0,0,1,0,0,1,0};
	Grid room30 = Grid{1,1,1,0,0,0,0,1,0}; // boss room
		
	Grid testArray[5][6] =
	{

		{ room1,room2,room3,room4,room5,room6 },
		{ room7,room8,room9,room10,room11,room12 },
		{ room13,room14,room15,room16,room17,room18 },
		{ room19,room20,room21,room22,room23,room24 },
		{ room25,room26,room27,room28,room29,room30 }


	};



	//bool runTBAG = true;
	//while (runTBAG = true)
	//{
	//	char *gameInput = "0";
	//	cin >> gameInput;
	//	
		//	
	//	
	//	if (gameInput == "Q")
	//	{
	//		break;
	//	}
	//}

	char *gameInput ="0";
	cin >> gameInput;

	/*run.p_moveTest(player1, gameInput);*/





	


	system("pause");
	return 1;
}