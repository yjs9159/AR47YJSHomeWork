#include <iostream>


// 순환 참조라고 한다
// 순환참조를 해결하는 방법은
// 선언과 구현의 분리이다

// 클래스 전방선언이라고 부른다
class Monster;

class Player
{
public:
    int Att = 10;
    int Hp = 10;

    void Attack()
    {
        
    }
};

class Player;

class Monster
{
public:
    int Att = 10;
    int Hp = 10;

    void Attack()
    {

    }
};


int main()
{
    std::cout << "Hello World!\n";
}