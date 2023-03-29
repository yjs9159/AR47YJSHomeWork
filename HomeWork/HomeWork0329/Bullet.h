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
	void Move();	//�Ѿ��� �����̰� �ϴ� �Լ�

public:
	//Get. Set
	inline int2 Get_Pos() { return Position; }	//�Ѿ� ��ġ ��ȯ
	inline bool Get_Dead() { return IsDead; }	//�Ѿ� ���� ��ȯ

	inline void Set_Pos(int2 Pos) { Position = Pos; }	//�Ѿ� ��ġ �ٲٱ�
	inline void Set_Dir(int2 Dir) { MoveDir = Dir; }	//�Ѿ� ���� �ٲٱ�
	inline void Set_Dead(bool Dead) { IsDead = false; }	//�Ѿ� ���� �ٲٱ�

private:
	int2 MoveDir = { 0, 0 };		//�Ѿ��� ������ ����
	int2 Position = { -1, -1 };	//�Ѿ��� �ִ� ��ġ

	bool IsDead = false;	//�Ѿ��� ����
};

