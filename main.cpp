#include <iostream>
#include <string> // C++
#include "Global.h"
#include "Render.h"
#include "Tick.h"
#include "Input.h"
#include "Goblin.h"
#include "Hog.h"
#include "Slime.h"
#include "Player.h"
#include <vector>
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
	vector<Player*> PlayerList;

	PlayerList.push_back(new Player);
	PlayerList.push_back(new Player);
	PlayerList.push_back(new Player);
	PlayerList.push_back(new Player);
	PlayerList.push_back(new Player);

	for (size_t i = 0; i < PlayerList.size(); i++)
	{
		cout << "Player" << i + 1 << "¹øÂ°HP:" << PlayerList[i]->GetHP() << endl;
	}
	for (size_t i = 0; i < PlayerList.size(); i++)
	{
		delete PlayerList[i];
	}
	PlayerList.clear();
	cout << PlayerList.size() << endl;
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
	return 0;
}

