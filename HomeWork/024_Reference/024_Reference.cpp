#include <iostream>

void EquipPtr(int* _Ptr)
{

}

void EquipRef(const int& _Ref)
{

}

int main()
{

    int Value0 = 10;
    int Value1 = 20;

    // 대부분의 언어에서 참조라는 의미는
    // 특정 메모리영역의 위치를 가리킨다
    // 
    // 포인터형
    // 포인터는 언제든지 자신이 참조(가리킨다) 대상을 바꿀 수 있다
    int* Ptr = nullptr;
    int* Ptr = &Value0;
    Ptr = &Value1;

    // 포인터 연산자를 통해서 다양한 행위를 할수 있는게 포인터의
    // 장점이라고 할 수 있다

    // 참조형
    // 무조건 누군가를 가리켜야 한다
    int& Ref = Value0;
    Ref = Value0;
    Ref = Value1;
    // *Ptr; <= 할상 왼쪽처럼 값을 끌어내서 사용하는 포인터이다
    // 특정이름의 변수가 있다고 쳤을ㄸ깨
    // 이제부터 Value0이라는 애를 이제부터 Ref라고도 부를게

    Ref = 100; // 이러면 Value0에도 100을 넣은 것이다


    EquipPtr(nullptr);

    int ItemEquip = 0;
    EquipRef(ItemEquip); 
    // 코드를 짜는 프로그래머의 의도에 따라 절대로 값을 비워 놓을 수 없으면 Reference => 왜? 무조건 값을 넣어줘야 하니까

}