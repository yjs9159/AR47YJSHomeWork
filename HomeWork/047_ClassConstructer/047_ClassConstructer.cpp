#include <iostream>


class Weapon
{
public:
    int Att;

};
class Player
{
public:
    // 리터럴 초기화라고 부르는 초기화 방식을 이용할 수 있다
    int hp = 20;
    int Maxatt = 20;
    int MinAtt = 20;
    int Pdef = 20;
    int MDef = 20;
    int Crit = 20;

    void TestFunction()
    {

    }

public:
    // 무조건 클래스 이름과 완전히 동일해야 한다
    // 리턴 값이 없다 => 리턴값이 그 클래스의 객체이기 때문
    // 객체 없이 호출가능하다 => 일반적인 클래스의 함수는 무조건 객체가 필요하다
    //                          객체를 만들어내야하는 함수가 객체를 필요로하면 모순
    // 리터럴 초기화와 멤버이니셜라이저가 2순위이기 때문에 멤버이니셜라이저의 값이 최종 적용된다
    // 
    Player()
        : hp(30), Maxatt(30), MinAtt(30), Pdef(30), MDef(30), Crit(30)
    {
        // 이건 대입이라고 부른다
        hp = 10;
    }
};

void Test(const Player& _Player)
{

}


int main()
{
    // 생성자는 

    // 클래스를 내가 만들었는데
    // 내가 정의하지 않는 행동을 할 수 있다면 그건 컴파일러가 그렇게 한거다
    // 그리고 그건 내 눈에 생략된거다
    Player NewPlayer = Player();

    // 클래스의 멤버함수는 무조건 객체를 필요로 한다
    // 전역함수 처럼 그냥 함수쓰듯이 사용할 수 없다
    // 하지만 이 제약에서 벗어난 함수가 2종이 있는데
    // 그중 1개가 생성자이다
    // 생성자는 객체를 만들어내는 전역함수를 의미한다
    NewPlayer.TestFunction();


}