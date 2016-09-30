#pragma once
#include <windows.h>
#include <iostream>
using namespace std;


class Grid
{

public:
	Grid() {}
	Grid(bool, bool, bool, bool, bool, bool, bool, bool, bool, const char*);







private:
	bool g_dark;
	bool g_locked;
	bool g_emeny;
	bool g_weapon;
	bool g_key;

	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;


	const char * g_words;


};

