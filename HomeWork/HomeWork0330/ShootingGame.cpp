#include "ShootingGame.h"
#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"
#include "bullet.h"
#include "Monster.h"

Player ShootingGame::NewPlayer;
Monster ShootingGame::ArrMonster[ShootingGame::ArrMonsterCount];

void ShootingGame::Loading()
{
	Bullet::AllOff();		// �����ϸ� ��� �Ѿ��� �߻���� �ʾ��� ���̹Ƿ� �� ����

	NewPlayer.SetBulletArr(Bullet::GetArrBullet());		// �÷��̾ �Ѿ��� �����͸� �˰� �Ѵ�	

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();		// �÷��� ȭ���� �߾ӿ� ��ġ��Ų��
	NewPlayer.SetPos(ScreenSize.Half());

	for (int i = 0; i < ArrMonsterCount; i++)
	{
		ArrMonster[i].SetPos({ i + 3, 1 });
	}
}

void ShootingGame::collision()
{
	Bullet* BulletArr = Bullet::GetArrBullet();

	// ��� �Ѿ˰�
	for (size_t BulletIndex = 0; BulletIndex < Bullet::ArrBulletCount; BulletIndex++)
	{
		Bullet& CurBullet = BulletArr[BulletIndex];		// ù��° �Ѿ��̶� + + +

		if (false == CurBullet.IsUpdate())  // �ൿ ���ϴ� �ֵ��� ���� ���ǹ��� �� �ʿ䰡 �����ϱ�
		{
			continue;
		}

		// ��� ����
		for (size_t MonsterIndex = 0; MonsterIndex < ShootingGame::ArrMonsterCount; MonsterIndex++)
		{
			Monster& CurMonster = ArrMonster[MonsterIndex];		// ��� ���Ϳ� �� + + +

			if (false == CurMonster.IsUpdate())		// �ൿ ���ϴ� �ֵ��� ���� ���ǹ��� �� �ʿ䰡 �����ϱ�
			{
				continue;
			}

			if (CurMonster.GetPos() == CurBullet.GetPos())		// ��ġ�� ������(�浹) üũ�ϴ� �κ�
			{
				CurMonster.Off();
				CurBullet.Off();
			}

		}
	}
}

void ShootingGame::MonsterEndCheck()
{
	// 1. �����̰� �Ѵ�
	// �������� �����̰� �غ���
	// ���������� �����̰� �غ��� ���� ����� Dir
	// 2. ���� ��� ���� �� 1���� ��Ҵ��� Ȯ���Ѵ�
	//	  2-1. ���� ���� üũ�Ѵ�
	//	  2-2. ������ ���� ������ üũ�Ѵ�
	/*if (���Ͱ� ���� ���� ��Ҵ�)
	{
		int a = 0;
	}*/
	// 3. ������ �ٲ۴�
	// 4. ������ ����

	bool Check = false;
	for (size_t i = 0; i < ArrMonsterCount; i++)
	{
		int2 NextPos = ArrMonster[i].GetNextPos();

		if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
		{
			Check = true;
			break;
		}
	}

	if (false == Check)
	{
		return;
	}

	for (size_t i = 0; i < ArrMonsterCount; i++)
	{
		ArrMonster[i].Down();
	}

}

void ShootingGame::GameUpdate()
{
	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear(); // ȭ���� ����ϰ� �����

		// ������ �����ӿ�ũ�� �����ϴ�
		// �������� ���ο��� ��ü���� Ȱ���ϴ� ��

		NewPlayer.Render();
		Bullet::AllRender();
		for (size_t i = 0; i < ArrMonsterCount; i++)
		{
			ArrMonster[i].Render();
		}

		MonsterEndCheck();
		collision();

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		Bullet::AllUpdate();

		for (size_t i = 0; i < ArrMonsterCount; i++)
		{
			ArrMonster[i].Update();
		}
	}
}

void ShootingGame::GameProgress()
{
	Loading();
	GameUpdate();
}
