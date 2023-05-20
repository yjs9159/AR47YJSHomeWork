#include <iostream>

// 0 전사
// 1 마법사
// 2 궁수
// 3 성기사


// enum은 컴파일 되면 int로 바뀐다
//enum GameJobType
//{
//	Fighter, // 0
//	Mage, // 1
//	Archer, // 2
//	Paladin, // 3
//};

// enum class 는 enum보다 좀 더 형을 따진다
// 암시적 형변환이 다 막혀있다
// 얘는 그냥 int가 될 수 없다 
enum class GameJobType
{
	Fighter, // 0
	Mage, // 1
	Archer, // 2
	Paladin, // 3

	//Fighter = 5, // 5
	//Mage, // 6
	//Archer, // 7
	//Paladin, // 8
};

class FightUnit
{
	// 직업
	GameJobType JobType;

public:
	void SetJobType(GameJobType _Type)
	{
		JobType = _Type;
	}
};


int main()
{
	// 직업이라는 게 있다고 쳤을때

	FightUnit NewUnit;

	// enum class 가 더 명시적이다
	NewUnit.SetJobType(GameJobType::Archer);

	int Value = (int)GameJobType::Archer; // 명시적 형변환
}