#include "Player.h"
#include "Enemy.h"
#include "Grid.h"
#include "String.h"

#include <windows.h>
#include <iostream>
using namespace std;

MyString::MyString(char *test)
{
	for (int i = 0; i < 266; i++)
	{
		t_data[i] = test[i];

	}

}

int MyString::stringlength(char *z)
{
	int i = 0;
	while (z[i] != 0)
	{
		i++;
	}
	return i;

}

int MyString::Length()
{

	int i = 0;

	while (t_data[i] != 0)
	{
		i++;
	}


	return i;

}

bool MyString::Compare(MyString a)
{
	bool running = true; // 'bool' statement for while loop.
	int i = 0; // Initlizing 'i' to '0'.

	while (true) // 'While' loop to compare arrays 'ex1[]' and 'ex2[]'.
	{
		if (t_data[i] == 0 && a.t_data[i] == 0) // 'If' statement comparing both arrays, (if ex1 and ex2 are equal).
		{

			return 0;

			break;
		}

		if (t_data[i] > a.t_data[i]) // 'If' statement comparing both arrays, (if ex2 is greater than ex1).
		{

			return -1;

			break;

		}

		if (t_data[i] < a.t_data[i]) // 'If' statement comparing both arrays, (if ex2 is less than ex1)
		{

			return 1;

			break;
		}

		else // 'Else' statement if other if statements are incorrect ('i' increments).
		{
			i++;
		}


	}
	cout << "\n \n";
	return true;

}

char MyString::characterAtIndex(int z)
{

	return t_data[z]; // Returning character from character array 'findCharacter[]'. 
}

char * MyString::Append(MyString a)
{

	int i = stringlength(t_data); // destination
	int j = 0; // source

	while (a.t_data[j] != 0)
	{
		t_data[i] = a.t_data[j];
		++i;
		++j;
	}

	t_data[i] = 0;
	return t_data;

}

char * MyString::Prepend(MyString a)
{

	
	int i = stringlength(t_data); // destination
	int j = 0; // source


	while (a.t_data[j] != 0)
	{
		t_data[i] = a.t_data[j];
		++j; // Increment source before destination
		i++;
	}

	t_data[j] = 0;


	return t_data;


}

char * MyString::ToLower()
{
	int i = 0;
	while (t_data[i] != 0)
	{
		if ((int)t_data[i] >= 65 && (int)t_data[i] <= 90)
		{
			t_data[i] = t_data[i] + 32;
		}
		i++;
	}


	return t_data;

}

char * MyString::ToUpper()
{


	int i = 0;
	while (t_data[i] != 0)
	{
		if ((int)t_data[i] >= 97 && (int)t_data[i] <= 122)
		{
			t_data[i] = t_data[i] - 32;
		}
		i++;
	}


	return t_data;

}

const char * MyString::constChar()
{
	const char * Test1 = t_data;
	return Test1;
}

bool MyString::subString(char * string)
{
	bool stringFound = false;
	MyString a = MyString(string);
	int x = 0;

	for (int i = 0; i < stringlength(t_data); i++)
	{
		if (t_data[i] == string[i])
		{
			x++;
			if (x == a.stringlength(t_data))
			{
				stringFound = true;
				break;
			}
		}
		else
		{
			stringFound = false;
			x = 0;
		}
	}



	return stringFound;
}

char * MyString::stringInput()
{
	char Test1[266];

	cin >> Test1;


	for (int i = 0; i < 266; i++)
	{
		t_data[i] = Test1[i];

	}

	return Test1;

}








