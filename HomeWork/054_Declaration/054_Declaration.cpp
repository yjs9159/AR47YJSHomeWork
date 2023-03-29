#include <iostream>

// 구현이라고 하는 문법은
// 선언과 함수체를 같이 놓은 문법을 구현된 함수라고 부른다
// 함수 선언만 따로 놓을 수가 있다

// 함수 선언
void Fucntion()
// 함수체
{

}

// 전역 함수의 경우에는 선언을 몇개를 해도 상관없다
void Function2();
void Function2();
void Function2();
void Function2();

// 클래스는 문법상 선언과 구현이 내부에서 혼재되어 있을 수 도 있고
// 아닐 수도 있는 특이한 놈이라서
// 클래스 자체는 2개를 선언할 수는 없다

class Player
{
public:
    // 일반적인 멤버변수는 이미 그 자체로 선언이면서 구현이다
    int Hp;
public:
    void Damage();
};
int main()
{
    std::cout << "Hello World!\n";
}
