#pragma once
#include "ConsoleGameMath.h"

class Bullet
{
public:
	Bullet();
	Bullet(int2 Pos, int2 Dir);
	~Bullet();

public:
	// Functions
	void Move();	//총알이 움직이게 하는 함수

public:
	//Get. Set
	inline int2 Get_Pos() { return Position; }	//총알 위치 반환
	inline bool Get_Dead() { return IsDead; }	//총알 상태 반환

	inline void Set_Pos(int2 Pos) { Position = Pos; }	//총알 위치 바꾸기
	inline void Set_Dir(int2 Dir) { MoveDir = Dir; }	//총알 방향 바꾸기
	inline void Set_Dead(bool Dead) { IsDead = false; }	//총알 상태 바꾸기

private:
	int2 MoveDir = { 0, 0 };		//총알이 움직일 방향
	int2 Position = { -1, -1 };	//총알이 있는 위치

	bool IsDead = false;	//총알의 상태
};

