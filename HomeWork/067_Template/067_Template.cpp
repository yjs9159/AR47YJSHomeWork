
#include <iostream>

// 모든 코드는 완전히 동일한데 자료형만 변수처럼
// 사용하고 싶을 때 사용하는 문법이 바로 template이다
// 이 템플릿이란 문법은
// 특정 함수나 특정 클래스에서 자료형만 바뀐 완전히 동일한 함수나 완전히 동일한 클래스를
// 만들고 싶을 때 사용하는 문법이다

template<typename Datatype>
void Function(Datatype _Value)
{
	printf_s("%d\n", _Value);
}


// 템풀릿으로 만든 뭔가가 있는데
// 딱 이게 char일 때만 특수하게 동작하게 해줘
// 템플릿 특수화라는 문법이다
template<>
void Function(char _Value)
{
	printf_s("%c\n", _Value);
}



//void Function(short _Value)
//{
//	printf_s("%d\n", _Value);
//}





int main()
{
	// 함수에 경우 인자추론을 할 수 있다
	// 그 상황에 맞춰서
	// Function<int>(100);

	Function/*<int>*/(100);
	Function/*<char>*/('1');
}
