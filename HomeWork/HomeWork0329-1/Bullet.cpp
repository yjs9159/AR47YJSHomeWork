#include "Bullet.h"

Bullet::Bullet()
{

}

void Bullet::Update()
{
	--Pos.Y;
}