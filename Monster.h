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
	//HP�� �ҷ����⸸ �ϰ� ���ϸ� �ȵǱ⶧���� Const�Լ��� ����Ѵ�.
	int GetHP() const
	{
		return HP;
	}
protected:
	int HP;
};