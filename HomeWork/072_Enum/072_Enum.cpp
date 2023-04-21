#include <iostream>


// 0 전사
// 1 마법사
// 2 궁수
// 3 성기사

// 컴파일 되면 이녀석은 int로 변형되게 된다
enum GmaeJobType
{
    Fighter, // = 0
    Mage, // = 1
    Archer, // = 2
    Paladin // = 3
};
class FightUnit
{
    // 직업
    int JobType;

    void SetJobType()
    {

    }
};


int main()
{
    FightUnit NewUnit;

    // NewUnit.SetJobType
}