#include "Player.h"
#include "Grid.h"
#include "String.h"

#include <windows.h>
#include <iostream>
using namespace std;


//class Teacher
//{
//public:
//	Teacher(Grid  &room) :m_index(0), currentRoom(&room)
//	{
//		std::cout << currentRoom->m_description;
//	}
//	Grid * currentRoom;
//	int m_index;
//	void Move()
//	{
//		std::cout << currentRoom->m_description;
//		currentRoom++;
//	}
//	void MoveDown()
//	{
//		m_index += 4;
//		if (m_index < 16)
//		{
//			currentRoom += m_index;
//			std::cout << currentRoom->m_description;
//		}
//		else
//		{
//			std::cout << currentRoom->m_description;
//			std::cout << "nah fam \n";
//		}
//
//	}
//};
//




int main()
{

	Player a = Player();
	Player player1 = Player(0, 0, 0);


	bool runTBAG = true;
	int x = 0;
	int y = 0;
	int count = 0;

	Grid room1 = Grid{ 1,0,1,0,"This room is empty \n You are in room 1...." };
	Grid room2 = Grid{ 1,0,1,1,"This room is empty \n You are in room 2...." };
	Grid room3 = Grid{ 1,0,1,1,"This room is empty \n You are in room 3...." };
	Grid room4 = Grid{ 1, 0, 0, 1,"This room is empty \n You are in room 4...." };

	Grid room5 = Grid{ 1,1,1,0, "This room is empty \n You are in room 5...." };
	Grid room6 = Grid{ 1,1,1,1, "This room is empty \n You are in room 6...." };
	Grid room7 = Grid{ 1,1,1,1,"This room is empty \n You are in room 7...." };
	Grid room8 = Grid{ 1,1,0,1,"This room is empty \n You are in room 8...." };

	Grid room9 = Grid{ 1,1,1,0,"This room is empty \n You are in room 9...." };
	Grid room10 = Grid{ 1,1,1,1,"This room is empty \n You are in room 10...." };
	Grid room11 = Grid{ 1,1,1,1,"This room is empty \n You are in room 11...." };
	Grid room12 = Grid{ 1,1,0,1,"This room is empty \n You are in room 12...." };

	Grid room13 = Grid{ 0,1,1,0,"This room is empty \n You are in room 13...." };
	Grid room14 = Grid{ 0,1,1,1,"This room is empty \n You are in room 14...." };
	Grid room15 = Grid{ 0,1,1,1,"This room is empty \n You are in room 15...." };
	Grid room16 = Grid{ 0,1,0,1,"This room is empty \n You are in room 16...." };

	Grid nodes[16] = {
		room1,room2,room3,room4,
		room5,room6,room7,room8,
		room9,room10,room11,room12,
		room13,room14,room15,room16
	};

	Teacher matthew = Teacher(nodes[0]);
	while (true)
	{
		matthew.MoveDown();
		system("Pause");
	}



	



	system("pause");
	return 1;
}