﻿#include <iostream>

class FightUnit
{
public:
	int GetAtt()
	{
		return Att;
	}

private:
	int Att = 10;
	int Hp = 100;
};

class Monster : public FightUnit
{

};

class BossMonster : public Monster
{

};

class Player : public FightUnit
{
private:
	int Lv = 1;
	int Equip = 1;
};
// 다형성을 표현하는 문법인 virtual은 보통 상속과 함께한다
// 

// 내 게임에 있는 존재들끼리 싸울 때 사용하는 함수
void FightScene(FightUnit* _Player, FightUnit* _Monster)
{

}

int main()
{
	
	Player NewPlayer;
	int A = NewPlayer.GetAtt();

	//int Value = sizeof(Test);

	//Test Arr[10];

	//Test* Ptr;

	//Ptr += 1;
}