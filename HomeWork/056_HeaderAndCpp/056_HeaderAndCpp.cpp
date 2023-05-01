#include <iostream>
#include "Player.h"
#include "Monster.h"

int main()
{
	// 컴파일러는 2가지 처리를 한다
	// 먼저 Cpp들을 다 검사한다
	// 하나의 프로젝트의 내가 친 모든 코드는
	// 단 1개의 파일로 응축되게 한다


	Player NewPlayer = Player();

	Monster NewMonster = Monster();

	NewPlayer.Damage(10);

	// 내가 사용하지 않는 건 컴파일러가 맘대로 지워버릴 때가 있는데
	// 쓰면 에러가 날 것이다
	// Monster::MonsterCount = 10;
}