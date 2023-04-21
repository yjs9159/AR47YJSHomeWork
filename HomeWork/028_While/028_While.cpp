#include <iostream>

int main()
{
    // while (메모리영역, 조건문)
    // {
    //      실행코드
    // }

    // while (내부에는 ,를 통해서 여러가지 조건을 넣을 수 있다)
    // 무조건 가장 오른쪽에 있는 ,의 메모리영역의 값만을 조건으로 친다

    while (printf_s("조건문"), true)
    {
        printf_s("실행코드");
    }
}