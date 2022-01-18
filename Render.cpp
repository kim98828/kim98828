#include <iostream>
#include <string> // C++
#include "Global.h"
#include "Render.h"

using namespace std;


void Render()
{
	system("cls");
	cout << "          " << "MUD °ÔÀÓ" << endl;
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P" << "  ";
			}
			else if (Map[Y][X] == 0)
			{
				cout << "¡à" << " ";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "¡á" << " ";
			}
			else if (Map[Y][X] == 9)
			{
				cout << "G" << "  ";
			}
		}
		cout << endl;
	}
}