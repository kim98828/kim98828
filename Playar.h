#pragma once

class Player
{
public:
	int Gold();
	int HP();
	int MP();
	
	void Collect();
	void Move();
	void Attack();
	void Run();
};