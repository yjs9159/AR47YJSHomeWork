#pragma once
#include "ConsoleGameobject.h"
#include "ShootingGame.h"

class Player; // MasterPlayer가 Player 클래스의 내용을 몰라도 되니 전방선언
class ConsoleGameScreen;
class Bullet : public ConsoleGameObject
{
public:
	static const int ArrBulletCount = 10;

	static Bullet* GetArrBullet()
	{
		return ArrBullet;
	}

	static void AllOff();
	static void AllRender();
	static void AllUpdate();

	void Update();
protected:

private:
	static Bullet ArrBullet[Bullet::ArrBulletCount];

	Bullet();
};


