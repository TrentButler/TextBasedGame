#include "Grid.h"
#include "String.h"
#include "Function Deff.h"
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;



class Player
{

public:
	Player(Grid &room) :p_index(0), currentRoom(&room)
	{
		/*cout << currentRoom->p_description;*/
	}

	Player() {};
	Grid * currentRoom;
	int p_index;

	void moveRight()
	{

		if (currentRoom->g_east == true)
		{
			/*cout << currentRoom->p_description << "\n";*/
			currentRoom++;
		}

	}

	void moveLeft()
	{
		if (currentRoom->g_west == true)
		{
			/*cout << currentRoom->p_description << "\n";*/
			currentRoom--;
		}
	}

	void moveDown() 
	{

		p_index = 4;

		if (p_index < 16 && currentRoom->g_south == true)
		{
			currentRoom += p_index;
			/*cout << currentRoom->p_description;*/
		}
		else
		{
			cout << currentRoom->p_description;
			cout << "NOPE!";
		}



	}
	
	void moveUp() 
	{

		p_index = 4;
		if (p_index > 0 && currentRoom->g_north == true)
		{
			currentRoom -= p_index;
		/*	cout << currentRoom->p_description;*/
		}

		else
		{
			currentRoom->p_description;
			cout << "Nope!!!! \n";
		}
		

	}

	


	bool p_item;
	

};




int main()
{



	bool runTBAG = false;
	int x = 0;
	int y = 0;
	int count = 0;

	
	Grid room0 = Grid(0, 0, 0, 0, 0, "Game Over \nYou Win! \n \nPress 'Q' to quit.... \n \n"); // Win room


	
	Grid room1 = Grid(0, 1, 1, 0, 0, "This room is empty \n \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right...\n \nChoose a direction.... \n \n");
	Grid room2 = Grid(0, 1, 1, 1,0, "This room is empty \n \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room3 = Grid(0, 1, 0, 1,0, "This room is empty \n \nThere is a door behind you... \nThere is a door to your left... \n \nChoose a direction....\n \n");

	Grid room4 = Grid(0, 1, 0, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room5 = Grid(1, 1, 1, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction... \n \n");
	Grid room6 = Grid(1, 1, 1, 1,0, "This room is empty \n \nThere is door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right \n \nChoose a direction... \n \n");
	Grid room7 = Grid(1, 1, 0, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \n \nChoose you direction.... \n \n");

	Grid room8 = Grid(1, 1, 1, 0, 1, "You have found the key to the exit!!!! \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room9 = Grid(1, 1, 1, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room10 = Grid(1, 1, 1, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room11 = Grid(1, 1, 0, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \n \nChoose a direction.... \n \n");

	Grid room12 = Grid(1, 0, 1, 0,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room13 = Grid(1, 0, 1, 1,0, "This room is empty \n \nThere is a door in front of you... \nThere is a door to your left... \nThere is a door to your right... \n \n");
	Grid room14 = Grid(1, 0, 1, 1,0, "This is the start of your journey... \n \nFind the key to unlock the door.... \nThe door is in the upper left corner of this map.... \nThe key is somewhere in this grid... \nGood Luck... \n \nThere is a door in front of you... \nThere is a door to your left... \nThere is a door to your right... \n \n");
	Grid room15 = Grid(1, 0, 0, 1,0, "This room is empty \n \n There is a door in front of you... \nThere is a door to your left... \n \nChoose a direction.... \n \n");

	Grid nodes[16] = {
		room0,room1,room2,room3,
		room4,room5,room6,room7,
		room8,room9,room10,room11,
		room12,room13,room14,room15
	};


	Player Elliot = Player(nodes[14]); //  PLAYER
	
	
	
	Grid grid = Grid();
	Player player = Player();




	
	while (true)
	{
		system("cls");
		cout << "\n \n";
		cout << "Find the exit.... \n \n";
		cout << "Good Luck...... \n \n";
		cout << "To display controls enter '?' \n \n";
		cout << "To start game enter 'S' \n \n";
		cout << "To exit game enter 'Q' \n \n";
			

		char startGame;
		cin >> startGame;

		switch (startGame)
		{

		case 'S': // Start the game....
		{
			runTBAG = true;
			while (runTBAG == true)
			{
						
				
				char gameInput;
				cout << Elliot.currentRoom->p_description << "\n \n"; cin >> gameInput;			
				system("cls");


				if (Elliot.p_index > 16)
				{
											
					player.p_index = 16;
					
				}

				if (Elliot.p_index < 0)
				{
					player.p_index = 0;
				}

				if (player.p_index=8) // Work on this
				{
					Elliot.p_item = true;
				}

				if (Elliot.p_item == true)
				{
					nodes[1].g_west = true;
					nodes[4].g_north = true;
				}
			
				


				
				switch (gameInput)
				{
				case 'w':
				{
					Elliot.moveUp();
					
					break;
				}

				case 's':
				{
					Elliot.moveDown();
					break;
				}

				case 'a':
				{
					Elliot.moveLeft();
					break;
				}

				case 'd':
				{
					Elliot.moveRight();
					break;
				}
				
				case '?':
				{
					cout << "Move Up ~~>> w <<~~ \n \n";
					cout << "Move Down ~~>> s <<~~ \n \n";
					cout << "Move Left ~~>> a <<~~ \n \n";
					cout << "Move Right ~~>> d <<~~ \n \n";
					break;
				}
				
				case 'Q':
				{
					cout << "Lata broski! \n";
					system("pause,");
					runTBAG = false;
					break;

				}

				default:
				{
					system("cls");
					cout << "\n \n";
					cout << "Wrong Input bro";
					cout << "\n \n";
					break;
				}



				}
				


			}
			break;
		}

		case '?':
		{
			cout << "\n \n";
			cout << "Move Up ~~>> w <<~~ \n \n";
			cout << "Move Down ~~>> s <<~~ \n \n";
			cout << "Move Left ~~>> a <<~~ \n \n";
			cout << "Move Right ~~>> d <<~~ \n \n";
			cout << "\n \n";
			system("pause");
			break;
		}
		
		case 'Q':
		{
			cout << "\n \n";
			cout << "Until next time.... \n \n";
			system("pause");
			return 0;
		}


		}

		

	}




	
	



	



	system("pause");
	return 1;
}