#include "Grid.h"
#include "String.h"
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;



class Player
{

public:
	Player(Grid &room,bool item) :p_index(0), currentRoom(&room)
	{
		p_item = item;
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
	Grid room0 = Grid(0, 0, 0, 0, 0, "You have escaped the underground test facility.... \nDont let the men with no eyes catch you again... \nYou might not be as lucky next time... \n \n You Win! \n \nPress 'Q' to quit.... \n \n"); // Win room
	
	
	Grid room1 = Grid(0, 1, 1, 0, 0, "There is a vending machine in this empty room... \nThe only thing inside of the machine is a pack of breath mints... \nHow ironic... \n \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right...\n \nChoose a direction.... \n \n");
	Grid room2 = Grid(0, 1, 1, 1,0, "You walk in a room with someone straped on a bed... \nThey seem to already be dead... \nThe room has a smell you have never encountered before... \n \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room3 = Grid(0, 1, 0, 1,0, "You enter a room that smells like a combination of a restruant and a morgue... \nThis room is where they keep the remains of their test subjects... \nThey are cooking what is left of the test subjects... \n \nThere is a door behind you... \nThere is a door to your left... \n \nChoose a direction....\n \n");

	Grid room4 = Grid(0, 1, 0, 1,0, "There are the remains of one the facility workers... \nThe same one who abducted you... \nFrom the waist up is all that remains of him... \nYou kick him in the head... \nYou decapitate his head and it rolls across the floor... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room5 = Grid(1, 1, 1, 1,0, "You wander upon a humanoid figure standing in the corner trembling... \nIt turns and stares with fear.... \nYou should keep moving.... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction... \n \n");
	Grid room6 = Grid(1, 1, 1, 1,0, "You stumble upon the facility dress room... \nAll of the hazmat suits are gone... \nYou have to continue without them... \n \nThere is door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right \n \nChoose a direction... \n \n");
	Grid room7 = Grid(1, 1, 0, 1,0, "You enter a empty testing room...\nIt seems to have been recently cleaned up... \n There is a bed that seems to have some sort of restraints on it... \nYou better turn back the other way... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \n \nChoose you direction.... \n \n");

	Grid room8 = Grid(1, 1, 1, 0, 1, "There is a desk with its drawer open... \nThe exit key is inside... \nThe key is covered in some kind of abnormal mucus... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your right... \n \nChoose a direction.... \n \n"); // key room
	Grid room9 = Grid(1, 1, 1, 1,0, "You enter a empty room... \nThe walls ooze with what seems to be a mix of blood and some alien subastance... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room10 = Grid(1, 1, 1, 1,0, "You walk in what seems to be the facility restroom... \nYour eyes gaze upon a horrid sight... \nIts better you dont know what those two were doing... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room11 = Grid(1, 1, 0, 1,0, "A freakish looking test monkey lays on the floor.... \nIt breathes out its last breath... \n \nThere is a door in front of you... \nThere is a door behind you... \nThere is a door to your left... \n \nChoose a direction.... \n \n");

	Grid room12 = Grid(1, 0, 1, 0,0, "This room is dark... \nYou begin to hear a biting noise from the corner of the room... \nYou better move along... \n \nThere is a door in front of you... \nThere is a door to your right... \n \nChoose a direction.... \n \n");
	Grid room13 = Grid(1, 0, 1, 1,0, "There is a black bag on the floor.... \nIt has a peculiar smell...  \n \nThere is a door in front of you... \nThere is a door to your left... \nThere is a door to your right... \nChoose a direction.... \n \n");
	Grid room14 = Grid(1, 0, 1, 1,0, "This is the start of your journey to escape the Izan Eibmoz test facility... \n \nFind the key to unlock the bunker.... \nThe exit is in the upper left corner of this test facility.... \nThe key is somewhere in this horrid place... \nGood Luck... \n \nThere is a door in front of you... \nThere is a door to your left... \nThere is a door to your right... \nChoose a direction.... \n \n");
	Grid room15 = Grid(1, 0, 0, 1,0, "You enter a empty testing room...\nIt seems to have been recently cleaned up... \nThere is a bed that seems to have some sort of restraints on it... \nYou better turn back the other way... \n \nThere is a door in front of you... \nThere is a door to your left... \n \nChoose a direction.... \n \n");

	Grid nodes[16] = {
		room0,room1,room2,room3,
		room4,room5,room6,room7,
		room8,room9,room10,room11,
		room12,room13,room14,room15
	};

	bool runTBAG = false;
	Player Elliot = Player(nodes[14],0); //  PLAYER
		
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
				system("cls");
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

				if (Elliot.p_index = 8)
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
					system("pause");
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