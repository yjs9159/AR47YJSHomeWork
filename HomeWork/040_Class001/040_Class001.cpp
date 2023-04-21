#include <iostream>

// c++에서 클래스는 모든 것을 만들 수 있는 문법이다
class Player
{
    
    // 속성과 행동이라라고 한다

    // 속성
    // 이걸 멤버변수라고 한다
     
    // 속성은 어떠어떠한 특징이 있다
    // 맷집이 쎄
    // 속력이 빨라와 같은 특징이 있다
    // 내부에서 변수를 선언함으로써 표현할 수 있다

    // 이 녀석은 이름이 있어
    const char* const Name = "Player";
    // 물리력을 행사할 수 있어
    int Att; // 공격력
    // 이녀석은 맷집이 있어
    int Hp; // 방어력


    // 행동
    // 맞을 수 있어야 한다
    // 뛸 수 있어야 한다

    // 뛴다
    void Run()
    {

    }

    // 맞는다
    void Damage(const int _Damage)
    {

    }

    // 능력치를 보여준다
    void StatusRender()
    {
        printf_s("%s 의 스테이터스 ------------\n", Name);
        printf_s("공격력 : %d\n", Att);
        printf_s("체력 : %d\n", Hp);
        printf_s("---------------------------\n");
    }
};
// 이것도 사용자 정의 자료형중 하나이다

// 자료형
// 기본자료형 int bool
// 사용자 정의 자료형 Player, Monter FightZone => 모든 것을 표현할 수 있다

int main()
{
    // int도 기본 클래스
    
    // 개념을 생각하고 개념을 class로 정의 내리고
    // NewPlayer가 객체다
    Player NewPlayer0 = Player();
    Player NewPlayer1 = Player();
    Player NewPlayer2 = Player();

    Player ArrPlayer[3];

    int Value = int();
}
