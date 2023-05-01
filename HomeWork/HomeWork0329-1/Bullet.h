#pragma once
#include "ConsoleGameMath.h"

class Bullet
{
public:

	Bullet();

	inline void SetPos(const int2& _Value) // GetPos�� SetPos���� ������ �Լ����� ��� ���Ͽ� �����ϱ� �Ѵ�
	{									   // �� ��� inline�� �ٿ��� �ִ��� ������ �Ⱦ��� �Ѵ�
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	void Update();

protected:

private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);

	// �̷� ������ Has a��� �Ѵ�
	// Bullet NewBullet;  �÷��̾��� ��ü ���ο� �Ѿ��� �ִ�
	// Bullet* NewBullet;  �ٱ��� �ִ� �Ѿ��� ������ �� �ִ�
};


