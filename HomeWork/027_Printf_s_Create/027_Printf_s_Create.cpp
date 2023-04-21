#include <iostream>

void MyPrintf(const char* const _Ptr)
{
	// 문자열의 끝에는 0이 들어가는 것을 체크해야 하는데
	// 입력받은 값이 길면 조건문도 끝이 없어지기 때문에
	// 반복문을 배운다
	int Count = 0;
	char ch = 0;
	while (ch = _Ptr[Count], 0 != _Ptr[Count])
	{
		putchar(ch);
		Count += 1;
	}
	
	/*putchar(_Ptr[1]);
	putchar(_Ptr[2]);*/
}

int main()
{
	// char Arr[10] = {};

	const char* Ptr = "test print";

	// 포인터 문법중 하나인 
	// random index access
	char ch0 = Ptr[0];
	char ch1 = Ptr[1];
	char ch2 = Ptr[2];
	char ch3 = Ptr[3];
	char ch4 = Ptr[4];
	char ch5 = Ptr[5];
	char ch6 = Ptr[6];
	char ch7 = Ptr[7];
	char ch8 = Ptr[8];
	char ch9 = Ptr[9];
	char ch10 = Ptr[10];
	char ch11 = Ptr[11];
	char ch12 = Ptr[12];
	char ch13 = Ptr[13];


	MyPrintf(Ptr); // 형 변환
}