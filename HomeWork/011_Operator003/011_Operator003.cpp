#include <iostream>

int main()
{

    /*
    삼항 연산자
    a ? b : c  
    참 혹은 거짓 메모리 ? 참일때 메모리 : 거짓일때 메모리
    */

    int Left = 7;
    int Right = 3;
    int Result = 0;

    Result = (Left != Right) ? 100 : 200;
    Result = true ? 100 : 200;


    /*
    sizeof 연산자
    ()안에 있는 메모리 영역의 바이트 크기를 리턴
    sizeof(int)
    sizeof(bool)
    */
    Result = sizeof(Left);
    Result = sizeof(int);
    Result = sizeof(bool);


}