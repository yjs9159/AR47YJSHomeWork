#include <iostream>

// short 2바이트 정수형
class Player
{
public:
    int Hp;
    char Value2;
    short Value3;
    __int64 Value4;
    // 8바이트 이하 가장 큰 바이트의 자료형을 찾고
    // 4바이트
    // 먼저 4바이트를 할당했다고 쳐보고
    // 딱 맞거나 들어갈 수 있으면 그대로 픽스
    // 4바이트 할당한다
    // char
    // int Hp;
};

int main()
{
    int Size = sizeof(Player);
}
