#include <iostream>

void ValueChangePtr(int* Ptr)
{
    *Ptr = 0;
}

void ValueChangeValue(int* Ptr)
{
    *Ptr = 0;
}

int main()
{
    {
        int Value = 10;

        ValueChangeValue(&Value);


        int* Ptr = &Value;

        int** PtrPtr = &Ptr;
        // 다중 포인터도 똑같다
        // Value의 주소 값을 가지고 있는 Ptr을
        // PtrPtr이 Ptr의 주소 값을 가지고 있는 것

        // 그 위치의 메모리를 사용하겠다
        // 포인터 변수의 앞에 *을 붙이는 연산자는
        // *Ptr 100번지의 값을 사용하겠다
        *Ptr = 20;

        ValueChangePtr(&Value);
        ValueChangePtr(Ptr);
    }
}