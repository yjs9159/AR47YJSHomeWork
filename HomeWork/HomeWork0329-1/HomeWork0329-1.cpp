#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"

int main()
{
	Player NewPlayer = Player();

	// int2 NewPos = int2{ 5,5 };
	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear(); // 화면을 깔끔하게 지운다

		// 게임의 프레임워크와 동일하다
		// 이제부터 내부에서 객체들이 활동하는 것

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();


	}

}
