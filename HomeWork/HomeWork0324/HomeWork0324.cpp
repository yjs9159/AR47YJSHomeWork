#include <iostream>
#include <conio.h>
// 내 프로그램을 멈추게 하는 건 운영체제의 도움을 받아야 한다
#include <windows.h>

// 이게 1단계
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
	int2(int _X, int _Y)
		: X(_X), Y(_Y)
	{

	}
};

class ConsoleGameScreen
{
private:					// 생성자를 private로 만듦으로써 여러개의 스크린을 만드는 것을 억제한닽
	ConsoleGameScreen()
	{

	}

	static ConsoleGameScreen MainScreen;

public:
	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	// 클래스 내부에 전역변수를 선언할 수 있다
	// static을 통해서 
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static int2 GetScreenSize() // 나의 스크린 사이즈를 가져오는 함수
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
				printf_s("%c", Arr[y][x]);
			}
			printf_s("\n");
		}
	}
	// IsScreenOver()와 InPut()
	// ConsoleGameScreen.IsScreenOver
	// Player.Input
	bool IsScreenOver(const int2& _Pos) const
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


	// 화면 바깥으로 못나가게 하기
	// ConsoleGameScreen 클래스의 IsScreenOver를(무조건 사용해서) InPut함수와 연결하기
	void Input()
	{
		
		/*이건 내가 키를 눌렀다면 1
		아니라면 0을 리턴하는 함수고 정지하지 않는다
		키를 눌렀다는 것을 체크해주는 함수*/
		if (0 == _kbhit())
		{
			// 0.5초간 멈춘다
			// 키가 안눌렸다면 0.5초간 멈추게 한 다음에 위로 올릴 것이다
			Sleep(InterFrame);
			// 일부러 멈추게 만들것이다
			return;
		}

		// 어떤키를 눌렀는지 알려주는 함수
		
		char Ch = _getch();

		switch (Ch)
		{
		case 'a':
		case 'A':
			Pos.X -= 1;							// 일단 인풋 받은데로 이동하자
			if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))	// 이동은 했는데 맞는지 확인해보자
			{
				Pos.X += 1;						// 화면 밖으로 나가면 true니까 여기 들어온건 화면 밖이다
			}									// -> 인풋 받은데로 이동했더니 화면 밖이다 -> 뒤로 되돌리자
			break;

		case 'd':
		case 'D':
				Pos.X += 1;
				if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
				{
					Pos.X -= 1;
				}
			break;

		case 's':
		case 'S':
				Pos.Y += 1;
				if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
				{
					Pos.Y -= 1;
				}
			break;

		case 'w':
		case 'W':
				Pos.Y -= 1;
				if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos))
				{
					Pos.Y += 1;
				}
			break;

		default:
			break;
		}

		Sleep(InterFrame);
	}
protected:

private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);
};


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