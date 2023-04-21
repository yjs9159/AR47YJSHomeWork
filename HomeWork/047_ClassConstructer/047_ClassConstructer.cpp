// 생성자

#include <iostream>

class Weapon
{
public:
    int Att = 200;

public:
    Weapon()
    {

    }
};

class Potion
{
public:
    int Heal = 100;

public:
    Potion()
    {

    }
};

class Player
{
public:
    // 리터럴 초기화라고 부르는 초기화 방식을 이용할 수 있다
    // 리터럴 초기화는 변수를 선언하고 바로 초기화 해주는 방식이다
    int Hp = 20;
    int Def = 20;
    int MaxAtt = 20;
    int MinAtt = 20;
    int PDef = 20;
    int MDef = 20;
    int Crit = 20;
    Weapon PlayerWeapon = Weapon();
    Potion PlayerPotion = Potion();


    void TestFunction()
    {
         
    }

public:
    // 생성자는 무조건 클래스 이름과 완전히 동일해야 한다
    // 리턴값이 없다 => 리턴값이 그 클래스의 객체이기 때문
    // 객체없이 호출이 가능하다 => 일반적인 클래스의 함수는 무조건 객체가 필요하다
    //                           객체를 만들어내야 하는 함수가 객체를 필요로 하면 모순이 생기기 때문
    // 멤버이니셜라이저라는 문법을 사용할 수 있다
    // 리터럴 초기화와 비교해보면
    // 멤버이니셜라이저가 2순위이기 때문에 멤버이니셜라이저의 값이 최종 적용된다
    // 생성과 대입의 차이는 프로그래머들이 정말 꼼꼼하게 신경쓰는 차이이기 떄문에

    ///*Player*/Player() // => Player를 리턴하는 Player
    //    : Hp(30), MaxAtt(30), MinAtt(30), PDef(30), MDef(30), Crit(30) // 생성의 순간
    //{
    //    // 이건 대입이라고 부른다
    //    Hp = 10;
    //}

    Player(int _Value0, int _Value1)
    {

    }
};

void Test(const Player& _Player)
{

}


int main()
{
    // 생성자는 기본적으로 함수로 인식된다

    // 클래스를 내가 만들었는데
    // 내가 정의하지 않는 행동을 할 수 있다면 그건 컴파일러가 그렇게 한것이다
    // 그리고 그건 내 눈에 생략된 것이다
    // Player NewPlayer = Player(20, 30);
    // 리스트 이니셜라이저 문법이라고 한다
    // Player NewPlayer = Player(20, 30);
    // Player NewPlayer = /*Player*/{20, 30};

    // int Value = int(20);

    // 아래처럼 그냥 사용할 수 없다
    // Player::TestFucntion();


    // 클래스의 멤버함수는 무조건 객체를 필요로 한다
    // 멤버함수는 전역함수처럼 그냥 함수 쓰듯이 사용할 수는 없다
    // 하지만 이 제약에서 벗어난 함수가 2종이 존재하는데
    // 그 중 하나가 생성자이다
    // 생성자는 객체를 만들어내는 전역함수를 의미한다
    NewPlayer.TestFunction();


}