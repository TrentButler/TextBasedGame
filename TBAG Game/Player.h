#pragma once
#include <windows.h>
#include <iostream>
using namespace std;


class Player
{

public:
	Player(Grid &room) :p_index(0), currentRoom(&room)
	{
		cout << currentRoom->p_description;
	}

	void moveRight()
	{
		cout << currentRoom->p_description;
		currentRoom++;
	}
	
	void moveLeft()
	{
		cout << currentRoom->p_description;
		currentRoom--;
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


	int p_index;
	bool p_item;
	Grid * currentRoom;

};


