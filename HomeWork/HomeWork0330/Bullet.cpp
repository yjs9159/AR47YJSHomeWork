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
		ArrBullet[i].Off();			// �ҷ��� �÷��̾ ��� �ൿ�� ���� �� �����ϱ� ������ �÷��̾��� �ڿ� ���´�
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

		ArrBullet[i].Render();			// �ҷ��� �÷��̾ ��� �ൿ�� ���� �� �����ϱ� ������ �÷��̾��� �ڿ� ���´�
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

		ArrBullet[i].Update();			// �ҷ��� �÷��̾ ��� �ൿ�� ���� �� �����ϱ� ������ �÷��̾��� �ڿ� ���´�
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
