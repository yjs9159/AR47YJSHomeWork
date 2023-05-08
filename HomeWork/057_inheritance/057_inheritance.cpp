// 상속
#include <iostream>

// 캡슐화
// 클래스가 특정 기능들을 내부에 품고 있는 형태를 캡슐화라고 부른다
// 캡슐화를 지원하는 문법은 접근제한 지정자(private, public)

// 상속
// 상속은 특정 개념의 특성들을 하위 개념들이 물려받는 것을 말한다
// Is a 관계라고 한다
// Has a 관계는 플레이어는 아이템을 가지고 있다
// class Item class Weapom Weapon is a Item
// class Item class Potion Potion is a Item
// 무기는 아이템이다
// 포션은 아이템이다
// 갑옷은 아이템이다


class Player
{

};

// 기본 클래스를 만든다
class Item
{

	//						내부코드			자식코드			외부
public:					//    공개			  공개			공개
protected:				//	  공개			  공개			비공개
private:				//	  공개			  비공개			비공개


public:
	// Player* Master;	
	int Gold = 0;

protected:
	void Buy()
	{

	}

private:
	void Sell()
	{

	}
};

// : public Item 상속을 의미하는 문법
class Weapon : public Item
{
public:
	Weapon()
	{
		// Sell(); => private라 못쓴다
		
		Buy();
		// 자식코드
		Gold = 20;
	}
};

// 나는 아이템을 상속 받겠다
class Potion : public Item
{
	
};

class Armor : public Item
{

};

int main()
{
	Potion NewPotion;
	NewPotion.Gold


}
