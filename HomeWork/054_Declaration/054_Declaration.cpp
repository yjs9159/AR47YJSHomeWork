
#include <iostream>

// 구현이라고 하는 문법은
// 선언과 함수체를 같이 놓은 문법을 구현이라고 부른다

// 함수 선언만 따로 놓을 수가 있다

void Function();

// 함수 선언
void Function()
// 함수체
{

};

// 이러이러한 함수가 있을거야
// 일단 믿고 호출하고 컴파일해줘
// 구현은 분명히 나중에 있을거야
void Function0();			
void Function1();
void Function2();

void Function0()			// Function0은 Function2를 호출해야 한다
{
	Function2();			// 이 코드가 실행 될 때 Function2는 아직 모르는 상태
}							// 그러므로 함수를 선언 먼저 하고 구현을 나중에 한다
void Function1()			// Function1은 Function0을 호출해야 한다
{
	Function0();
}
void Function2()			// Function2는 Function0을 호출해야 한다
{
	Function0();
}
// 보통 구현은 main함수 밑으로 뺀다

int main()
{
	Function0();
	Function1();
	Function2();
}