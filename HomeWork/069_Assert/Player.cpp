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
		MsgBoxAssert("�������� 0�Դϴ�");
	}
}