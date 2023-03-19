#include <iostream>

int main()
{
	int Check = 0;
	
	// if(메모리)영역이 참인지 거짓인지를 판단해서 코드를 실행해주는 조건문이다
	// switch(메모리)영역과 완전히 같은 메모리가 있는지 비교해주는 조건문이다

	int Value = 0;

	switch (Value)
	{
	// case Check:
	case 0:
		printf_s("Value 0");
		break;
	case 1:
		printf_s("Value 1");
		break;
	case 2:
		printf_s("Value 2");
		break;
	case 3:
		printf_s("Value 3");
		break;
	default:
		printf_s("Value not");
		break;
	}

	char InputKey = 'a';
	switch (InputKey)
	{
	case 'a':
	case 'A':
		printf_s("에이를 쳤습니다");
		break;

	default:
		break;
	}
}