﻿// HomeWork0324.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
// 운영체제가 도와줄수밖에 없다.
#include <Windows.h>

// 이게 0단계
// 근본오브 근본 수학 물리 
class int2
{
public:
	int X = 0;
	int Y = 0;

public:
	int2 Half()
	{
		return { X / 2, Y / 2 };
	}

public:
	// 이건 내일 합니다.
	//int2() 
	//{
	//}

	int2(int _X, int _Y)
		: X(_X), Y(_Y)
	{

	}
};

// 이게 1단계
// 근본오브 근본 수학 물리 
class ConsoleGameScreen
{
private:
	ConsoleGameScreen()
	{
	}

	static ConsoleGameScreen MainScreen;

public:
	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	// 메모리 영역 자체가 달라졌다고 봐야합니다.
public:
	// 클래스 내부에 전역변수를 선언할수가 있습니다.
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static int2 GetScreenSize()
	{
		return int2{ ScreenXSize, ScreenYSize };
	}


	void ScreenClear()
	{
		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				Arr[y][x] = 'a';
			}
		}
	}

	void ScreenPrint() const
	{
		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				// Arr[y][x] = 'b';
				printf_s("%c", Arr[y][x]);
			}
			printf_s("\n");
		}
	}

	// 이녀석을 무조건 사용해서 플레이어가 바깥으로 못나가게 만드세요.
	bool IsScreenOver(const int2& _Pos) const
	{
		if (0 > _Pos.X)
		{
			return true;
		}

		if (0 > _Pos.Y)
		{
			return true;
		}

		if (ScreenXSize <= _Pos.X)
		{
			return true;
		}

		if (ScreenYSize <= _Pos.Y)
		{
			return true;
		}

		return false;
	}

	void SetScreenCharacter(const int2& _Pos, char _Ch)
	{
		if (true == IsScreenOver(_Pos))
		{
			return;
		}

		Arr[_Pos.Y][_Pos.X] = _Ch;
	}

private:
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

};

ConsoleGameScreen ConsoleGameScreen::MainScreen;


/////////////////////////////////////////////////////////////////// 엔진

// 2단계 컨텐츠
// 클래스가 다른 클래스를 알아야 합니다.
class Player
{
public:
	Player()
	{

	}

	int2 GetPos() const
	{
		return Pos;
	}

	void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	// 화면바깥으로 못나가게 하세요. 
	void Input(ConsoleGameScreen& _Screen)
	{
		if (0 == _kbhit())
		{
			// 0.5초간 멈춘다.
			Sleep(InterFrame);
			// 일부러 멈추게 만들겁니다.
			// continue; 반복문 내부에서만 사용가능
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
		default:
			break;
		}

		Sleep(InterFrame);
	}

	//void SetScreen(ConsoleGameScreen* _Screen)
	//{
	//	Screen = _Screen;
	//}

protected:

private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);
};


int main()
{
	Player NewPlayer = Player();

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear();

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();

	}


}