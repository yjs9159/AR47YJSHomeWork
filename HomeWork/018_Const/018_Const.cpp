#include <iostream>

int main()
{
    // 함수의 스택에서의 메모리 크기는 컴파일시 
    // 고정되어야 하기 때문에
    // 배열의 크기는 변수가 올 수 없다(무조건 상수)
    int ArrSize = 20;

    ArrSize = 30;

    /*int Value[ArrSize] = {};*/
        
    
    
    const bool cb = 20;
    const bool cc = 20;
    
    const int ArrSize = 20;

    // 특정 자료형 앞에 cosnt 키워드를 붙이면
    // 그 메모리의 비트적 상수화를 시킨다

    // ArrSize = 30;
}