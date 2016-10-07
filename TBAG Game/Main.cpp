#include "Player.h"
#include "Grid.h"
#include "String.h"

#include <windows.h>
#include <string>
#include <iostream>
using namespace std;



class Player
{

public:
	Player(Grid &room) :p_index(0), currentRoom(&room)
	{
		cout << currentRoom->p_description;
	}
	Player() {};
	Grid * currentRoom;
	int p_index;

	void moveRight()
	{
	
	if (p_index < 16)
	{
		cout << currentRoom->p_description << "\n";
		currentRoom++;
	}

	else
	{
		
		cout << " \n Nope!!!! \n";
	}
	}

	void moveLeft()
	{
		if (p_index > 16)
		{
			cout << currentRoom->p_description << "\n";
			currentRoom--;
		}

		else
		{
			cout << "\n Nope!!!! \n";
		}
	}

	void moveDown()
	{
		p_index += 4;

		if (p_index < 16)
		{
			currentRoom += p_index;
			cout << currentRoom->p_description;
		}
		else
		{
			cout << currentRoom->p_description;
			cout << "NOPE!";
		}
	}
	
	void moveUp()
	{

		p_index -= 4;
		if (p_index < 0)
		{
			currentRoom -= p_index;
			cout << currentRoom->p_description;
		}
	}


	bool p_item;


};



















int main()
{


	
	bool runTBAG = true;
	int x = 0;
	int y = 0;
	int count = 0;

	Grid room1 = Grid{ 1,0,1,0,"This room is empty \n You are in room 1.... \n" };
	Grid room2 = Grid{ 1,0,1,1,"This room is empty \n You are in room 2.... \n" };
	Grid room3 = Grid{ 1,0,1,1,"This room is empty \n You are in room 3.... \n" };
	Grid room4 = Grid{ 1, 0, 0, 1,"This room is empty \n You are in room 4.... \n" };

	Grid room5 = Grid{ 1,1,1,0, "This room is empty \n You are in room 5.... \n" };
	Grid room6 = Grid{ 1,1,1,1, "This room is empty \n You are in room 6.... \n" };
	Grid room7 = Grid{ 1,1,1,1,"This room is empty \n You are in room 7.... \n" };
	Grid room8 = Grid{ 1,1,0,1,"This room is empty \n You are in room 8.... \n" };

	Grid room9 = Grid{ 1,1,1,0,"This room is empty \n You are in room 9.... \n" };
	Grid room10 = Grid{ 1,1,1,1,"This room is empty \n You are in room 10.... \n" };
	Grid room11 = Grid{ 1,1,1,1,"This room is empty \n You are in room 11.... \n" };
	Grid room12 = Grid{ 1,1,0,1,"This room is empty \n You are in room 12.... \n" };

	Grid room13 = Grid{ 0,1,1,0,"This room is empty \n You are in room 13.... \n" };
	Grid room14 = Grid{ 0,1,1,1,"This room is empty \n You are in room 14.... \n" };
	Grid room15 = Grid{ 0,1,1,1,"This room is empty \n You are in room 15.... \n" };
	Grid room16 = Grid{ 0,1,0,1,"This room is empty \n You are in room 16.... \n" };

	Grid nodes[16] = {
		room1,room2,room3,room4,
		room5,room6,room7,room8,
		room9,room10,room11,room12,
		room13,room14,room15,room16
	};

	Player Elliot = Player(nodes[0]);
	
	
	while (runTBAG = true)
	{
		char gameInput;
		cin >> gameInput;
		system("cls");
		switch (gameInput)
		{
		case 'w':
		{
			Elliot.moveUp();
			break;
		}
				
		case's':
		{
			Elliot.moveDown();
			break;
		}
		
		case'a':
		{
			Elliot.moveLeft();
			break;
		}
		
		case 'd':
		{
			Elliot.moveLeft();
			break;
		}
		

		default:
		{
			system("cls");
			cout << "Wrong Input bro";
			break;
		}
		


		}
		


		
	}



	



	system("pause");
	return 1;
}