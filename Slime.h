#pragma once

#include "Monster.h"

class Slime :public Monster
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