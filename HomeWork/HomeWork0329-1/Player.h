#pragma once
#include "ConsoleGameMath.h"

class ConsoleGameScreen;
class Player
{
public:

	Player();

	inline void SetPos(const int2& _Value) // GetPos�� SetPos���� ������ �Լ����� ��� ���Ͽ� �����ϱ� �Ѵ�
	{									   // �� ��� inline�� �ٿ��� �ִ��� ������ �Ⱦ��� �Ѵ�
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}
	

	
	// ȭ�� �ٱ����� �������� �ϱ�
	// ConsoleGameScreen Ŭ������ IsScreenOver��(������ ����ؼ�) InPut�Լ��� �����ϱ�
	void Input();
	
protected:

private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);
};


