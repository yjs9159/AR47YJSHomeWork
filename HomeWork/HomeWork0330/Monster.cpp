#include "Monster.h"
#include "ConsoleGameScreen.h"

Monster::Monster()
{
	RenderChar = 'M';
}

// 선언과 구현을 분리했다면 구현에서는 override를 생략해야 한다
void Monster::Render() /*override*/
{
	if (true == IsUpdate())
	{
		ConsoleGameObject::Render();
	}
	else if(0 < DeathTime)
	{
		if (DeathTime % 2)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '@');
		}

		else
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '+');
		}

		--DeathTime;
	}
}

void Monster::Update()
{
	if (false == IsUpdate())
	{
		return;
	}

	if (true == DownCheck)
	{
		DownCheck = false;
		return;
	}

	// Pos.X += Dir;
}

