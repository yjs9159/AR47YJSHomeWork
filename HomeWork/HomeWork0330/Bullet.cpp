#include "Bullet.h"
#include "ConsoleGameScreen.h"
#include <conio.h>
#include <Windows.h>
#include "Player.h"

Bullet::Bullet()
{

}

void Bullet::Render()
{
	if (nullptr == MasterPlayer)
	{
		return;
	}

	if (true == MasterPlayer->IsFire())
	{
		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '^');

	}
}

void Bullet::Update()
{
	if (nullptr == MasterPlayer)
	{
		return;
	}

	if (true == MasterPlayer->IsFire())
	{
		--Pos.Y;
	}
	else
	{
		Pos = MasterPlayer->GetPos();
	}
}
