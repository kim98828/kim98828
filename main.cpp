#include <iostream>
#include <string> // C++
#include "Global.h"
#include "Render.h"
#include "Tick.h"
#include "Input.h"
#include "Player.h"
using namespace std;

void Swap(int *x, int *y)
{
	int Temp = 0;
	Temp = *x;
	*x = *y;
	*y=Temp;
}

int main()
{
	Player NewPlayer;
	NewPlayer.SetHP(-100);


	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
	return 0;
}

