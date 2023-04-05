
#include <iostream>

// 캡슐화
// 클래스가 특정 기능들을 내부에 품고있는 특성 그 자체를 캡슐화라고 부른다
// 캡슐화를 지원하는 문법은 접근제한 지정자


// 상속
// 상속은 특정 개념의 특성들을 하위 개념들이 물려 받는 것을 말한다
// Is a 관계라고 한다
// Has a 플레이어는 아이템을 가지고 있다


class Player
{

};


// 기본 클래스를 만든다
class Item
{
public:
    Player* Master;
    int Gold = 0;

};

// : public : Item 상속을 의미하는 문법
// 상속관계가 된다
class Weapon : public Item
{

};

class Potion : public Item
{

};

int main()
{



}
