#pragma once

class Player
{
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