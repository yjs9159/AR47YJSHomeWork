#pragma once

// ���� : 
class Player
{
public:
	// constructer destructer
	Player();
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _other) noexcept = delete;

	void Damage(int _Damage);

protected:

private:
	 
};

