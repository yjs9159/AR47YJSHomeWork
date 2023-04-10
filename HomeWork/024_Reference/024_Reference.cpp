#include <iostream>



int main()
{

	int Value0 = 10;
	int Value1 = 20;

	// c++에서 참조라는 의미는 
	// 특정 메모리 영역의 위치를 가리킨다 (포인터도 참조형이라고 부름)
	// 포인터는 언제든지 자신이 참조(가리키는)하는 대상을 갈아탈 수 있다\
	// 포인터형이라고 부른다
	int* Ptr0 = nullptr;
	Ptr0 = &Value0;
	Ptr0 = &Value1;

	// 참조형이라고 부른다
	// int& Ref; <= 참조형에서는 무조건 누군가를 가리켜야 한다
	int& Ref = Value0;
	Ref = Value0;
	Ref = Value1;












}