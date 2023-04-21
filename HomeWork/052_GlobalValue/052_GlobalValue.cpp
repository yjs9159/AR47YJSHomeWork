#include <iostream>

// 객체지향 -> 클래스를 만들고 그 클래스의 객체를 통해서 코딩한다

// 클래스는 선언이고 이 객체가 어떻게 쓰일것인지에 대한 설계도

int Value = 0;

void MonsterAllCountFunction()
{

}

class Monster
{
public:
	// static 멤버함수가 존재하고
	// 클래스에 속한 전역 함수가 된다
	static int GetAllMonsterCount()
	{
		return MonsterCount;
	}

	int Hp;



	// 실체는 없고 선언만 둔 것
	// 전방선언
	void Print();

	Monster()
	{
		// ++MonsterCount;
	}

private:
	// static 멤버변수
	// 전역변수는 데이터영역에 들어가야 한다
	// 몬스터만 사용할 수 있는 전역변수
	// const를 붙이고 초기화까지 해주는 순간 이녀석은 완전하게 변하지 않는 수가 된다
	static const int MonsterCount = 3;

	int Arr[MonsterCount][MonsterCount];
};

// 실체를 둔다
int Monster::MonsterCount = 0;

class Player
{
public:
	void Damage()
	{
		Value = 10;
	}
};

int main()
{
	// 몬스터가 관리하는 전역변수라는 뜻
	// 몬스터라는 속성에 속한 전역변수
	// Monster::MonsterCount = 20;

	Monster NewMonster0;
	Monster NewMonster1;
	Monster NewMonster2;
	Monster NewMonster3;

	int Count = Monster::GetAllMonsterCount();


	// 사용하는데 일반 멤버함수는 결국에는 객체가 필요하다
	// int Count = NewMonster3.GetAllMonsterCount();

	// 선언만 했지만 사용 가능하다
	// NewMonster3.Print();


}
