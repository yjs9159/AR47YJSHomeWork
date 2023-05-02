#include "ShootingGame.h"
#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"
#include "bullet.h"

void ShootingGame::GameProgress()
{
	// 총알 1발을 발사하기
	// 총알 클래스를 만든다
	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();

	NewBullet.SetPlayer(&NewPlayer);

	// int2 NewPos = int2{ 5,5 };
	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());


	// Bullet* NewBullet;
	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear(); // 화면을 깔끔하게 지운다

		// 게임의 프레임워크와 동일하다
		// 이제부터 내부에서 객체들이 활동하는 것

		NewPlayer.Render();
		NewBullet.Render();			// 불렛을 플레이어가 어떠한 행동을 했을 때 반응하기 때문에 플레이어의 뒤에 놓는다

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		NewBullet.Update();

	}
}
