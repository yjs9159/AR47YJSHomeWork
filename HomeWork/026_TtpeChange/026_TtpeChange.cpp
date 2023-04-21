#include <iostream>

int main()
{
    // const char[8]
    "aaaaaaa";

    // const char* const <= const char[8]
    printf_s("aaaaaaa");

    {
        // 자료형이라는게 의미가 없기 때문에
        // 특정한 상황이 아니라면
        // 방법을 가리지 않는다면 어떠한 자료형은 언제나 어떠한 자료형이 될 수 있다
        // 형변환은 무조건 무언가를 한다 => 연산을 해서
        // 잘라야하면 자르고 늘려야하면 늘려서 비트를 변경하는 일이 된다
        bool bValue = true;
        int aValue = 12341564;
        
        aValue = bValue;


    }
    {
        // 아예 변환을 허용하지 않는 자료형 관계도 존재한다
        int Value = 0;
        int* Ptr = nullptr;
        // Ptr = Value;
        // Value = Ptr;    둘다 형변환을 허용하지 않는다
    }

    {
        // 모든건 메모리가 생기면 자료형이 존재한다

        // int[10]형
        int Arr[10];

        /*int Value = Arr;
        Arr = Value;*/     // 둘다 형변환을 허용하지 않는다

        // int*형  int[10]형
        int* Ptr = Arr;  // 이건 된다 
        // 자료형이 다른데 대입이 됨 => 암시적 형변환이라고 한다
    }
}
