﻿#include <iostream>

int main()
{

	int Left = 0b00000000000000000000000000000010;
	int Right = 0b00000000000000000000000000000001;
	int Result = 0b00000000000000000000000000000000;	


	// 0b00000000000000000000000000000010
	// 0b00000000000000000000000000000001
	// 0b00000000000000000000000000000000

	// 비트단위 연산자 
	Result = ~0;
	
	// and
	Result = Left & Right;
	// 0b00000000000000000000000000000010	Left  
	// 0b00000000000000000000000000000001	Right
	// 0b00000000000000000000000000000000	Result

	// or
	Result = Left | Right;
	// 0b00000000000000000000000000000010	Left  
	// 0b00000000000000000000000000000001	Right
	// 0b00000000000000000000000000000011	Result

	// xor : 둘이 다를때만 true
	Result = Left ^ Right;

	// 0b00000000000000000000000000000000
	Result = 1 << 3; // Result의 비트 값을 왼쪽으로 세칸 이동해라

	Result = 1 << 33; // <= int는 4바이트이므로 32비트임. 비트 값보다 큰 수를 이동하니까 오류


	/* 복합할당연산자 ex) a += 1  => a = a + 1
	
	*/
}