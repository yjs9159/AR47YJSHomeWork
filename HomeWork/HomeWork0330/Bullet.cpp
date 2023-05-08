#include "Bullet.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <Windows.h>
#include "Player.h"
#include "ConsoleGameObject.h"

Bullet Bullet::ArrBullet[Bullet::ArrBulletCount];

void Bullet::AllOff()
{
	for (size_t i = 0; i < Bullet::ArrBulletCount; i++)
	{
		ArrBullet[i].Off();			// 불렛을 플레이어가 어떠한 행동을 했을 때 반응하기 때문에 플레이어의 뒤에 놓는다
	}
}

void Bullet::AllRender()
{
	for (size_t i = 0; i < Bullet::ArrBulletCount; i++)
	{
		if (false == ArrBullet[i].IsUpdate())
		{
			continue;
		}

		ArrBullet[i].Render();			// 불렛을 플레이어가 어떠한 행동을 했을 때 반응하기 때문에 플레이어의 뒤에 놓는다
	}
}

void Bullet::AllUpdate()
{
	for (size_t i = 0; i < Bullet::ArrBulletCount; i++)
	{
		if (false == ArrBullet[i].IsUpdate())
		{
			continue;
		}

		ArrBullet[i].Update();			// 불렛을 플레이어가 어떠한 행동을 했을 때 반응하기 때문에 플레이어의 뒤에 놓는다
	}
}
Bullet::Bullet()
{
	RenderChar = '^';
}

void Bullet::Update()
{
	if (true == IsUpdate())
	{
		--Pos.Y;
	}
}
