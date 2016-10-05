#include "Player.h"
#include "Grid.h"
#include "String.h"

#include <windows.h>
#include <iostream>
using namespace std;



int main()
{
	Grid test = Grid();
	Player player1 = Player(4, 4, 0);

	Node nodes[16];

	int x = 0;
	int y = 0;
	int count = 0;

	Grid room1 = Grid{ 1,0,1,0,"This room is empty" };
	Grid room2 = Grid{}



	for (int y = 0; y < 16; y++)
	{
		for (int x = 0; x < 16; x++)
		{
			Node n = Node(x, y);
			nodes[count];
			count++;

		}


	}
	





	
	


	


	system("pause");
	return 1;
}