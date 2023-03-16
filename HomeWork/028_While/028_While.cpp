#include <iostream>

int main()
{
    /*while (메모리 영역, 혹은 조건문) 
    {
        실행코드
    }*/

    /*while (내부에는 ,를 통해서 여러가지 조건을 넣을 수 있다)
    가장 무조건 오른쪽에 있는 ,의 메모리 영역의 값만을 조건으로 친다*/

    // while (특정 메모리 영역이 참인가 거짓인가)

    {
        int Value = 10;
        while (printf_s("조건문\n"), Value)
        {
            --Value;
            printf_s("실행코드\n");
        }
        // 조건문 실행코드 조건문 실행코드 ... => 실행 결과
    }

    {
        int Value = 10;
        do
        {
            --Value;
            printf_s("실행코드\n");
        } while (printf_s("조건문"), Value);
        // 실행코드 조건문 실행코드 조건문 ... => 실행 결과
    }
}