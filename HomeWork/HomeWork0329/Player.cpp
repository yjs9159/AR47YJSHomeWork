#include "Player.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <Windows.h>

Player::Player()
{
	MyBullet = Bullet();
}
// ȭ��ٱ����� �������� �ϼ���. 
void Player::Input()
{
	if (0 == _kbhit())
	{
		// 0.5�ʰ� �����.
		Sleep(InterFrame);
		// �Ϻη� ���߰� ����̴ϴ�.
		// continue; �ݺ��� ���ο����� ��밡��
		return;
	}

	char Ch = _getch();

	int2 NextPos = { 0, 0 };

	switch (Ch)
	{
	case 'a':
	case 'A':
		NextPos = Pos;
		NextPos.X -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.X -= 1;
		}
		break;
	case 'd':
	case 'D':
		NextPos = Pos;
		NextPos.X += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.X += 1;
		}
		break;
	case 'w':
	case 'W':
		NextPos = Pos;
		NextPos.Y -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.Y -= 1;
		}
		break;
	case 's':
	case 'S':
		NextPos = Pos;
		NextPos.Y += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Pos.Y += 1;
		}
		break;
	case 'f':
	case 'F':
		if (!IsFire()) // ������ �Ѿ� 1�߸� ������������ �߻��� �ƴ϶��
		{
			Shoot();	//�Ѿ� �߻��Ű�� �Լ�
		}
	default:
		break;
	}
	///////////////////////////////////////////////////////////////
	if (true == IsFire())
	{
		MyBullet.Move();		
		if (MyBullet.Get_Dead())
		{
			Fire = false;		
		}
	}
	///////////////////////////////////////////////////////////////

	Sleep(InterFrame);
}

void Player::Shoot()
{
	int2 Dir(-1, 0);

	Fire = true;
	MyBullet.Set_Pos(Pos);
	MyBullet.Set_Dir(Dir);
	MyBullet.Set_Dead(false);
}
