#include <iostream>

// virtual이 붙어있는 클래스는
// 이 클래스의 객체가 생성될 때
// void(*__vfptr[???])() <= 가상함수 테이블이라고 한다
// 
// 함수포인터의 배열을 만들어내고 그걸 함수포인터의 포인터로 저장한다
// void(**__vfptr)();

class FightUnit
{
public:
	virtual void Damage()
	{

	}

	virtual void FightStatusRender()
	{

	}

public:
	FightUnit()
	{
		this;
		int a = 0;
	}
};

class Player : public FightUnit
{
	void Damage() override
	{

	}

	void FightStatusRender() override
	{

	}

public:
	Player()
	{
		this;
		int a = 0;
	}
};

int main()
{
	int Value = sizeof(Player); // 아무 것도 없는 빈 클래스의 크기는 1바이트이다
	
	Player NewPlayer;


}
