﻿#include <iostream>

int main()
{
    // 램은 비트의 집합이다
    // 글자도 비트로 바뀌어야 한다  
    // char은 1바이트 문자형
    // 아스키 코드라고 한다

    char ch = 'A';
    // 1바이트면 8비트이고
    // 정수로 표현하면 255까지 표현 가능

    // 문자를 표현하는 방식은 한 가지 밖에 없다
    // 특정 글자와 정수를 매칭시킨다
    // a = 95야, 0 = 78이야
    
    // 앞쪽에 L을 붙여 표현해야 한다
    // 2바이트 문자열이고 2바이트를 표현하기 위해서
    // L'A' L을 안붙여주면 1바이트 문자열이라고 생각한다
    // 유니코드라고 한다

    wchar_t wch = L'A';

    // 유니코드도 한계가 생겨서 국가 코드란게 생겼다
    // UTF-8이라는 것이 나왔다
    
    char Arr = u8'a';
    // 이런 개념을 인코딩이라 한다

    // 아스키는 255개만 표현 가능
    // 멀티바이트 어떤건 1바이트 어떤건 2바이트
    // 와이드 바이트 모두 다 2바이트 == 유니코드
    // 
}