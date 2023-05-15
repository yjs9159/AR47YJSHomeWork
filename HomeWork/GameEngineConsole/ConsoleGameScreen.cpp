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
// IsScreenOver()�� InPut()
// ConsoleGameScreen.IsScreenOver
// Player.Input
bool ConsoleGameScreen::IsScreenOver(const int2& _Pos) const
{
	if (0 > _Pos.X)
	{
		return true; // ȭ�鿡�� ������ => true
		// ȭ�鿡�� �ȳ����� => false
	}

	if (0 > _Pos.Y)
	{
		return true; // ȭ�鿡�� ������ => true
		// ȭ�鿡�� �ȳ����� => false
	}

	if (ScreenXSize <= _Pos.X)
	{
		return true; // ȭ�鿡�� ������ => true
		// ȭ�鿡�� �ȳ����� => false
	}

	if (ScreenYSize <= _Pos.Y)
	{
		return true; // ȭ�鿡�� ������ => true
		// ȭ�鿡�� �ȳ����� => false
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

int2 ConsoleGameScreen::GetScreenSize() // ���� ��ũ�� ����� �������� �Լ�
{
	return int2{ ScreenXSize, ScreenYSize };
}