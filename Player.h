#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
	Player()
	{
		cout << "플레이어 생성" << endl;
	}
	~Player()
	{
		cout << "플레이어 해체" << endl;
	}
private:
	int HP;
public:
	int MP;
	int Gold;
public:
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
	//HP는 불러오기만 하고 변하면 안되기때문에 Const함수를 사용한다.
	int GetHP() const
	{
		return HP;
	}
	void Collect();
	void Move();
	void Attack();
	void Run();
};