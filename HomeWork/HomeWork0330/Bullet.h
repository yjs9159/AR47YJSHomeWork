#pragma once
#include "ConsoleGameMath.h"

class Player; // MasterPlayer�� Player Ŭ������ ������ ���� �Ǵ� ���漱��

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

	inline void SetPlayer(Player* _MasterPlayer)
	{
		// ����ڵ带 ����� �Ѵ�
		if (nullptr == _MasterPlayer)
		{
			return;
		}
		MasterPlayer = _MasterPlayer;
	}

	void Update();

	void Render();

protected:

private:
	// Player�� �˷���� �ϰ� �� �غ� �Ǿ��ٴ� ǥ��
	Player* MasterPlayer;

	bool Fire = false;

	int2 Pos = int2(0, 0);

	// �̷� ������ Has a��� �Ѵ�
	// Bullet NewBullet;  �÷��̾��� ��ü ���ο� �Ѿ��� �ִ�
	// Bullet* NewBullet;  �ٱ��� �ִ� �Ѿ��� ������ �� �ִ�
};


