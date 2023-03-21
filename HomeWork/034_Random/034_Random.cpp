#include <iostream>
#include <conio.h>

int main()
{
    // 현재 시간을 리턴해준다
    // 시간은 보통 8바이트 정수로 준다
    unsigned int Test = time(0);
    srand(Test);
}