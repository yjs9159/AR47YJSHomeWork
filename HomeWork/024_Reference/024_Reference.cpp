#include <iostream>

int main()
{
    //

    int Value0 = 10;
    int Value1 = 20;

    // 대부분의 언어에서 참조라는 의미는
    // 특정 메모리영역의 위치를 가리킨다
    // 
    // 포인터형
    // 포인터는 언제든지 자신이 참조(가리킨다) 대상을 바꿀 수 있다
    int* Ptr = &Value0;
    Ptr = &Value1;

    // 참조형
    // 무조건 누군가를 가리켜야 한다
    int& Ref;
    Ref = Value0;
    Ref = Value1;

    //
}