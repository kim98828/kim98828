#pragma once

#include "Monster.h"

class Goblin :public Monster
{
public:
	int Gold();
	int HP();
	int MP();

	void Attack();
	void Run();
	void move();
private:

};