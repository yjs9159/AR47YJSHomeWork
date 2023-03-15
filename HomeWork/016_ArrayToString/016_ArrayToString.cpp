#include <iostream>

int main()
{
    // 어떤 자료형이든 추가적인 문법으로 
    // 모두 다 배열이 될 수 있다

    int value = 10;


    {
        // 자동으로 전부 다 0으로 초기화된다
        int ArrValue[5] = {};
    }
    {
        // 초기화를 하지 않으면 임의의 값으로 
        int ArrValue[5];
    }

    {
        // 자동으로 전부 다 0으로 초기화 된다
        int ArrValue1[5] = {};

        int ArrValue2[5] = { 0, };

        // 제로베이스이기 때문에
        //                   1  2  3  4  5
        int ArrValue3[5] = { 0, 1, 2, 3, 4 };

        // bool 자료형도 배열에 사용 가능

    }

    // 문자의 배열은 축약형 표현을 사용할 수 있다
    // 추가적인 규칙이 있다
    {
        char ArrValue1[5] = { 'a', 'b', 'c' };

        char ArrValue2[5] = "abc";

        // 모든 이름은 시작위치를 표현하게 된다
        // [] <= 랜덤 인덱스 연산자
        ArrValue2[0];

        // V <= 이런 이름은 무조건 메모리의 시작 위치를 표현하게 된다
        char V;
        // V[0]

        // 배열의 경우에는 랜덤 인덱스 연산자를 통해서 
        // 시작 번지가 ArrValue2 100번지라고 하면
        ArrValue2[0];
        // ArrValue2 시작위치 + (sizeof(자료형) * 정수)
        // 위치의 데이터에 접근하겠다는 뜻이 됩니다
        ArrValue2[3];
        // ArrValue2 == 100번지니까
        // 100 + ( 1 * 3 ) = 103번지 
    }
} 