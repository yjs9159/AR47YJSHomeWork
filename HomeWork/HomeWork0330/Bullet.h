#pragma once
#include "ConsoleGameMath.h"

class Player; // MasterPlayer가 Player 클래스의 내용을 몰라도 되니 전방선언

class Bullet
{
public:

	Bullet();

	inline void SetPos(const int2& _Value) // GetPos와 SetPos같이 간단한 함수들은 헤더 파일에 구현하긴 한다
	{									   // 그 대신 inline을 붙여서 최대한 스택을 안쓰게 한다
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	inline void SetPlayer(Player* _MasterPlayer)
	{
		// 방어코드를 쳐줘야 한다
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
	// Player를 알려줘야 하고 알 준비가 되었다는 표현
	Player* MasterPlayer;

	bool Fire = false;

	int2 Pos = int2(0, 0);

	// 이런 구조를 Has a라고 한다
	// Bullet NewBullet;  플레이어의 신체 내부에 총알이 있다
	// Bullet* NewBullet;  바깥에 있는 총알을 조작할 수 있다
};


