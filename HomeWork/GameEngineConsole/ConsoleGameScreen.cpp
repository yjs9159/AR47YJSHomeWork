#include "ConsoleGameScreen.h"
#include <iostream>

ConsoleGameScreen ConsoleGameScreen::MainScreen;

void ConsoleGameScreen::ScreenClear()
{
	for (size_t y = 0; y < ScreenYSize; y++)
	{
		for (size_t x = 0; x < ScreenXSize; x++)
		{
			Arr[y][x] = 'a';
		}
	}
}

void ConsoleGameScreen::ScreenPrint() const
{
	for (size_t y = 0; y < ScreenYSize; y++)
	{
		for (size_t x = 0; x < ScreenXSize; x++)
		{
			printf_s("%c", Arr[y][x]);
		}
		printf_s("\n");
	}
}
// IsScreenOver()와 InPut()
// ConsoleGameScreen.IsScreenOver
// Player.Input
bool ConsoleGameScreen::IsScreenOver(const int2& _Pos) const
{
	if (0 > _Pos.X)
	{
		return true; // 화면에서 나갔다 => true
		// 화면에서 안나갔다 => false
	}

	if (0 > _Pos.Y)
	{
		return true; // 화면에서 나갔다 => true
		// 화면에서 안나갔다 => false
	}

	if (ScreenXSize <= _Pos.X)
	{
		return true; // 화면에서 나갔다 => true
		// 화면에서 안나갔다 => false
	}

	if (ScreenYSize <= _Pos.Y)
	{
		return true; // 화면에서 나갔다 => true
		// 화면에서 안나갔다 => false
	}
	return false;
}

void ConsoleGameScreen::SetScreenCharacter(const int2& _Pos, char _Ch)
{
	if (true == IsScreenOver(_Pos))
	{
		return;
	}

	Arr[_Pos.Y][_Pos.X] = _Ch;
}



ConsoleGameScreen::ConsoleGameScreen()
{

}

int2 ConsoleGameScreen::GetScreenSize() // 나의 스크린 사이즈를 가져오는 함수
{
	return int2{ ScreenXSize, ScreenYSize };
}