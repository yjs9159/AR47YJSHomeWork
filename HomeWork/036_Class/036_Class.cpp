#include <iostream>

//{
// // 특정 지역에 속하는 것을 지역변수라고 한다 
//}

//  어떠한 지역에도 속하지 않은 변수를 만들어 낼수가 있다
// 이름이 있는 함수나 그 외부에 있는 변수들을 전역변수라고 부른다
int GlobalValue;
// 선언 이후 아래부터 어디서든 사용할수 있다

void Function()
{
    ++GlobalValue;
}

int main()
{  // 지역의 시작
    int value = 0; // 지역변수

    Function();

} // 지역의 끝
