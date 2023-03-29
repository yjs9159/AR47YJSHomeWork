#include "Bullet.h"
#include "ConsoleGameScreen.h"

Bullet::Bullet()
{
}

Bullet::Bullet(int2 Pos, int2 Dir)
{
	MoveDir = Pos;
}

Bullet::~Bullet()
{
}

void Bullet::Move()
{
	Position.X += MoveDir.X;	
	Position.Y += MoveDir.Y;	

	if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Position))	
		IsDead = true;
}