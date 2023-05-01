#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"

int main()
{
	// 총알 1발을 발사하기
	// 총알 클래스를 만든다
	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();

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

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');
		
		if (true == NewPlayer.IsFire())
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewBullet.GetPos(), '^');
			NewBullet.Update();
		}
		
		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		if (false == NewPlayer.IsFire())
		{
			NewBullet.SetPos(NewPlayer.GetPos());
		}
		NewPlayer.Input();
	
	}

}
