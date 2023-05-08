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
	Bullet::AllOff();		// 시작하면 모든 총알은 발사되지 않았을 것이므로 다 끈다

	NewPlayer.SetBulletArr(Bullet::GetArrBullet());		// 플레이어가 총알의 포인터를 알게 한다	

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();		// 플레어어를 화면의 중앙에 위치시킨다
	NewPlayer.SetPos(ScreenSize.Half());

	for (int i = 0; i < ArrMonsterCount; i++)
	{
		ArrMonster[i].SetPos({ i + 3, 1 });
	}
}

void ShootingGame::collision()
{
	Bullet* BulletArr = Bullet::GetArrBullet();

	// 모든 총알과
	for (size_t BulletIndex = 0; BulletIndex < Bullet::ArrBulletCount; BulletIndex++)
	{
		Bullet& CurBullet = BulletArr[BulletIndex];		// 첫번째 총알이랑 + + +

		if (false == CurBullet.IsUpdate())  // 행동 안하는 애들은 밑의 조건문을 할 필요가 없으니까
		{
			continue;
		}

		// 모든 몬스터
		for (size_t MonsterIndex = 0; MonsterIndex < ShootingGame::ArrMonsterCount; MonsterIndex++)
		{
			Monster& CurMonster = ArrMonster[MonsterIndex];		// 모든 몬스터와 비교 + + +

			if (false == CurMonster.IsUpdate())		// 행동 안하는 애들은 밑의 조건문을 할 필요가 없으니까
			{
				continue;
			}

			if (CurMonster.GetPos() == CurBullet.GetPos())		// 위치가 같은지(충돌) 체크하는 부분
			{
				CurMonster.Off();
				CurBullet.Off();
			}

		}
	}
}

void ShootingGame::MonsterEndCheck()
{
	// 1. 움직이게 한다
	// 왼쪽으로 움직이게 해본다
	// 오른쪽으로 움직이게 해본다 몬스터 헤더의 Dir
	// 2. 끝에 어떠한 몬스터 중 1개라도 닿았는지 확인한다
	//	  2-1. 왼쪽 끝을 체크한다
	//	  2-2. 오른쪽 끝에 닿은걸 체크한다
	/*if (몬스터가 왼쪽 끝에 닿았다)
	{
		int a = 0;
	}*/
	// 3. 방향을 바꾼다
	// 4. 내려도 본다

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

		ConsoleGameScreen::GetMainScreen().ScreenClear(); // 화면을 깔끔하게 지운다

		// 게임의 프레임워크와 동일하다
		// 이제부터 내부에서 객체들이 활동하는 것

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
