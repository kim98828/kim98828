#pragma once
#include <iostream>
using namespace std;

class Player
{
public:
	Player()
	{
		cout << "�÷��̾� ����" << endl;
	}
	~Player()
	{
		cout << "�÷��̾� ��ü" << endl;
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
	//HP�� �ҷ����⸸ �ϰ� ���ϸ� �ȵǱ⶧���� Const�Լ��� ����Ѵ�.
	int GetHP() const
	{
		return HP;
	}
	void Collect();
	void Move();
	void Attack();
	void Run();
};