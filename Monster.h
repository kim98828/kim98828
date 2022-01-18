#pragma once

class Monster
{
public:
	Monster();
	void SetMonster(int HP,int MP);
	void Attack();
	void Move();
	void Run();

private:
	int HP;
	int MP;
};