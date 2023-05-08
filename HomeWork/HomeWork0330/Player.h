#pragma once
#include "ConsoleGameObject.h"
#include "Bullet.h"

class ConsoleGameScreen;
class Player : public ConsoleGameObject
{
public:

	Player();

	void Input();

	void SetBulletArr(class Bullet* _BulletPtr)  // ���⿡ ���漱���� �� �� �ִ�
	{
		BulletPtr = _BulletPtr;
	}

protected:

private:
	void ShootUpdate();

	static const int InterFrame = 200;

	Bullet* BulletPtr;

	int BulletCount = 0;
};


