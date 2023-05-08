#include "Player.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <windows.h>
#include "Bullet.h"

Player::Player()
{
	RenderChar = '*';
}

void Player::Input()
{

	/*�̰� ���� Ű�� �����ٸ� 1
	�ƴ϶�� 0�� �����ϴ� �Լ��� �������� �ʴ´�
	Ű�� �����ٴ� ���� üũ���ִ� �Լ�*/
	if (0 == _kbhit())
	{
		// 0.5�ʰ� �����
		// Ű�� �ȴ��ȴٸ� 0.5�ʰ� ���߰� �� ������ ���� �ø� ���̴�
		Sleep(InterFrame);
		// �Ϻη� ���߰� ������̴�
		return;
	}

	// �Ű�� �������� �˷��ִ� �Լ�

	char Ch = _getch();

	switch (Ch)
	{
	case 'a':
	case 'A':
		Pos.X -= 1;							// �ϴ� ��ǲ �������� �̵�����
		if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))	// �̵��� �ߴµ� �´��� Ȯ���غ���
		{
			Pos.X += 1;						// ȭ�� ������ ������ true�ϱ� ���� ���°� ȭ�� ���̴�
		}									// -> ��ǲ �������� �̵��ߴ��� ȭ�� ���̴� -> �ڷ� �ǵ�����
		break;

	case 'd':
	case 'D':
		Pos.X += 1;
		if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
		{
			Pos.X -= 1;
		}
		break;

	case 's':
	case 'S':
		Pos.Y += 1;
		if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
		{
			Pos.Y -= 1;
		}
		break;

	case 'w':
	case 'W':
		Pos.Y -= 1;
		if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
		{
			Pos.Y += 1;
		}
		break;

	case 'f':
	case 'F':
	{
		ShootUpdate();
	}
		break;
	default:
		break;
	}

	Sleep(InterFrame);
}

void Player::ShootUpdate()
{
	Bullet& NewBullet = BulletPtr[BulletCount];
	NewBullet.SetPos(Pos);
	NewBullet.On();
	++BulletCount;

	if (BulletCount >= Bullet::ArrBulletCount)
	{
		BulletCount = 0;
	}
}