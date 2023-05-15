#include "Player.h"
#include "BaseHeader.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Damage(int _Damage)
{
	if (0 == _Damage)
	{
		MsgBoxAssert("데미지가 0입니다");
	}
}