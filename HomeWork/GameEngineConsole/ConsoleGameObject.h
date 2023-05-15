#pragma once
#include "ConsoleGameMath.h"

// Screen에서 움직이는 오브젝트들의 기본 기능을 제공한다
class ConsoleGameObject
{
public:
	inline void SetPos(const int2& _Value) // GetPos와 SetPos같이 간단한 함수들은 헤더 파일에 구현하긴 한다
	{									   // 그 대신 inline을 붙여서 최대한 스택을 안쓰게 한다
		Pos = _Value;
	}

	inline int2 GetPos() const
	{
		return Pos;
	}

	bool IsDeath()
	{
		return DeathValue;
	}

	void Death()
	{
		DeathValue = true;
	}

	bool IsUpdate()
	{
		return UpdateValue;
	}

	void On()
	{
		UpdateValue = true;
	}

	void Off()
	{
		UpdateValue = false;
	}

	virtual void Render();
protected:
	int2 Pos;
	char RenderChar = ' ';

private:

	bool UpdateValue = true;
	bool DeathValue = false;

};

