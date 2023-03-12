#include <iostream>
// 헤더는 딱 필요한 헤더만 정확하게 #include 해놓는게 좋다
// 복붙을 많이 하기 때문에 컴파일이 오래 걸리기 때문이다

int main()
{
    // 100으로 바꾼다는 것은 그 위치의 비트를 수정하겠다는 뜻
    int PlayerHp = 100;

    // 이미 만들어져 있는 PlayerHP번째를 50이라는 값으로 바꿔라
    PlayerHp = 50;

    int Left = 7;
    int Right = 3;
    int Result = 0;


    Result = Left + Right;
    Result = Left - Right;
    Result = Left * Right;
    Result = Left / Right;

    bool bResult = true;
}