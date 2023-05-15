#include <iostream>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineBase/GameEngineDebug.h>


int main()
{
	while (true)
	{
		ConsoleGameScreen::GetMainScreen().ScreenClear(); // 화면을 깔끔하게 지운다

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

	}


}
