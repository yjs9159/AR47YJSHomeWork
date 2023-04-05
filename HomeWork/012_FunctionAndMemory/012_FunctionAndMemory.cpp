#include <iostream>


void Function()
{
    {
        int Value = 20;
    }

    {
        int Value = 30;
    }
    return;
}



// main이라는 이름의 실행흐름
// 그 실행흐름을 만들기 위해 메모리가 필요
int main()
{
// 함수의 시작
// 실행흐름의 시작

    // 스코프
    // 실행 흐름의 시작과 끝을 표현하는 기호

    // Unnamed scope
    // 이름이 없는 실행흐름
    {
        int Value = 100;
    }

    int Value = 20;

    // 함수를 실행하는 방법은
    // 아래와 같이 실행된다
    // F11을 누르면 다른 이름 있는 실행 흐름 내부로 들어갈 수 있다
    // F10은 그 실행 흐름을 한번에 다 실행해버리는 용도
    Function();

}
// 함수의 끝
// 실행 흐름의 끝