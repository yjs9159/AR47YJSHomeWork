#pragma once
#include "ConsoleGameMath.h"
#include "Bullet.h"

class ConsoleGameScreen;
class Player
{
public:

	Player();

	inline void SetPos(const int2& _Value) // GetPos와 SetPos같이 간단한 함수들은 헤더 파일에 구현하긴 한다
	{									   // 그 대신 inline을 붙여서 최대한 스택을 안쓰게 한다
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}
	
	inline bool IsFire()
	{
		return Fire;
	}

	
	// 화면 바깥으로 못나가게 하기
	// ConsoleGameScreen 클래스의 IsScreenOver를(무조건 사용해서) InPut함수와 연결하기
	void Input();
	
protected:

private:
	static const int InterFrame = 200;

	bool Fire = false;  

	int2 Pos = int2(0, 0);

	// 이런 구조를 Has a라고 한다
	// Bullet NewBullet;  플레이어의 신체 내부에 총알이 있다
	// Bullet* NewBullet;  바깥에 있는 총알을 조작할 수 있다

};


