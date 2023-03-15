#include <iostream>

int main()
{
    // 콘솔창에 글자를 띄운다
    // printf_s("aaaa");



    // char Arr[5] = "abc";
    // printf_s(Arr);

    // 1과 '1'은 완전히 다른 표현
    // 숫자  문자

    // "12345" 문자열 상수 표현식
    // 문자열 상수 표현식을 사용하면 무조건 마지막에 컴파일러가 알아서
    //  0을 붙인다
    char Arr[6] = "12345"/*0*/;

    // ctrl + k + c 내가 선택한 범위 주석처리 해줌
    char Arr[5] = { '1', '2', '3', '4', /*'5'*/ };

    // 제로베이스 기반
    // 배열의 개수를 셀 때 0부터 세는 것을
    // 제로베이스 기반 인덱스 표현이라고 한다
    char Value1 = Arr[0];
    char Value2 = Arr[1];
    char Value3 = Arr[2];
    char Value4 = Arr[3];
    char Value5 = Arr[4];

    printf_s(Arr);
}
