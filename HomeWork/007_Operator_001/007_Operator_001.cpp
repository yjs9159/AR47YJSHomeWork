#include <iostream>

int Plus(int _Left, int _Right)
{
    return _Left + _Right;
}



int main()
{
    int Left = 7;
    int Right = 3;
    int Result = 0;
    // 연산자에는 보통
    // 단항 연산자 <= 메모리 영역이 1개만 필요하면 단항
    // 이항 연산자 <= 메모리 영역이 2개만 필요하면 이항
    // 단항 연산자 <= 메모리 영역이 3개만 필요하면 삼항

    // ex) = 연산자는 이항 연산자
    //         7      3
    Result = Left - Right;
    Result = Left + Right;
    Result = Left * Right;
    // c++에서 정수의 나눗셈은 몫만 나온다
    Result = Left / Right;
    Result = Left % Right;
    Result = -Left;
    Result = +Left;
    // 전치, 전위
    Result = ++Left;
    // 후치, 후위
    Result = Left++;
    Result = --Left;
    Result = Left--;

    // 연산자 순서
    Result = 1 + 2 * 3;
    // () 가로 연산자
    // 연산 순서를 프로그래머가 지정하게 해줄 수 있는 연산자
    Result = (1 + 2) * 3;

    // bool이라는 자료형은 논리형이라고 부른다\
    // 논리형은 true와 false로
    // 참과 거짓이라는 2가지로만 표현할 수 있는 자료형을 논리형이라고 한다.
    // true 논리형 상수 참
    // false 논리형 상수 거짓

    bool bResult = true;
    bResult = false;

    bResult = Left == Right; // 같다
    bResult = Left != Right; // 같지 않다
    bResult = Left < Right; // 작다
    bResult = Left > Right; // 크다
    bResult = Left <= Right; // 작거나 같다
    bResult = Left >= Right; // 크거나 같다

    // 논리 연산자
    // and
    bResult = true && true;
    // 둘다 참이라면 참, 하나라도 거짓이라면 거짓
    bResult = true && false;
    bResult = false && false;

    // or
    bResult = Left || Right;
    // 둘 중 하나라도 참이라면 참, 모두 거짓이라면 거짓
    bResult = true && false;
    bResult = false && false;


}