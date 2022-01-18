#pragma once

class Monster
{
public:
	int MP;
private:
	int Gold;
public:
	void Attack();
	void Move();
	void Run();
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
protected:
	int HP;
};