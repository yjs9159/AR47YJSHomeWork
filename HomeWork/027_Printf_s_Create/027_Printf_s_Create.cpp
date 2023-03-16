// 027_Printf_s_Create.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void MyPrintf(const char* const _ptr)
{
    putchar(_ptr[0]);
}

int main()
{
    const char* Ptr = "test Print";

    // random index access
    char ch0 = Ptr[0];
}