#include <iostream>
#include "Global.h"
#include "Tick.h"

void Tick()
{
	if (Key == 'Q' || Key == 'q')
	{
		bIsRunning = false;
	}
	else if (Key == 'w' || Key == 'W')
	{
		PlayerY--;
		if (Map[PlayerY][PlayerX] == 1)
		{
			PlayerY++;
		}
	}
	else if (Key == 's' || Key == 'S')
	{
		PlayerY++;
		if (Map[PlayerY][PlayerX] == 1)
		{
			PlayerY--;
		}
	}
	else if (Key == 'a' || Key == 'A')
	{
		PlayerX--;
		if (Map[PlayerY][PlayerX] == 1)
		{
			PlayerX++;
		}
	}
	else if (Key == 'd' || Key == 'D')
	{
		PlayerX++;
		if (Map[PlayerY][PlayerX] == 1)
		{
			PlayerX--;
		}
	}
	if (Map[PlayerY][PlayerX] == 9)
	{
		bIsRunning = false;
	}
}