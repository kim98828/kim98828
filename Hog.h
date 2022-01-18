#pragma once

#include "Monster.h"

class Hog :public Monster
{
public:
	int Gold();
	int HP();
	int MP();

	void AttDack();
	void Run();
	void move();
private:

};