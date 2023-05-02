#include "Player.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <windows.h>

Player::Player()
{

}


// 화면 바깥으로 못나가게 하기
// ConsoleGameScreen 클래스의 IsScreenOver를(무조건 사용해서) InPut함수와 연결하기
void Player::Input()
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

	case 'f':
	case 'F':
		Fire = true;

	default:
		break;
	}

	Sleep(InterFrame);
}

void Player::Render()
{
	ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '*');
}