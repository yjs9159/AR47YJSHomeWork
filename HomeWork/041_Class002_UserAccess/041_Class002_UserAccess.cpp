#include <iostream>

class Player
{
    // 클래스 문법에서는 속성이나 행동을
    // 내가 외부에 공개할지 안할지를 결정할 수 있다

// 접근제한 지정자라고 부릅니다
// public 접근제한 지정자를 썼다
// 접근제한 지정자는 만들어진 위치부터 아래까지 새로운 접근제한 지정자가
// 없으면 전부 다 자신의 접근제한 지정자로 판단한다
    //     내부 코드          자식 코드          외부
public: //   공개               공개            공개
    int Att = 10;
    int Def = 2;
protected: // 공개              공개            비공개
    int Hp = 100;
private: // 
    int Speed = 3;
    
};
// 이 안에 안들어 있으면 다 외부입니디ㅏ

int main()
{
    // 외부
    Player NewPlayer = Player();

    // NewPlayer.
}
