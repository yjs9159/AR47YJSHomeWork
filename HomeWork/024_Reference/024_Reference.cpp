#include <iostream>

void EquipPtr(int* _Ptr)
{
	*_Ptr = 300;
}

void EquipRef(int& _Ref)
{
	_Ref = 200;
}

void TestFunction(const int& _Ref)
{

}

int main()
{
	int Value0 = 10;
	int Value1 = 20;

	// c++에서 참조라는 의미는
	// => 특정 메모리 영역의 위치를 가리킨다

	// 포인터형이라고 한다
	// 포인터는 언제든지 자신이 참조(가리킨다)하는 대상을 바꿀 수 있다
	int* Ptr = nullptr;
	Ptr = &Value0;
	Ptr = &Value1;
	int Size90 = sizeof(Ptr);


	// 포인터 연산자를 통해서 다양한 행위를 할 수 있는게
	// 포인터의 장점이다
	*Ptr;
	// 참조형(레퍼런스형)이라고 한다
	// 참조형은 무조건 누군가를 가리켜야 한다
	// int& Ref;
	int& Ref = Value0;
	Ref = 100;  // <= 이러면 Value0에다가 100을 넣은것과 똑같다
	Ref = Value1;

	int Size1 = sizeof(Ref);
	// *Ptr <= 항상 왼쪽처럼 값을 끌어내서 사용하는 포인터이다
	// 참조형(레퍼런스)는 포인터와 같이 주소값을 사용하지만 *을 붙일 필요가 없다
	// 특정 이름의 변수가 있다고 쳤을 때 
	// 이제부터 Value0이라는 애를 Ref라고도 부를게
	// 한번 초기화시 참조한 메모리 영역을 바꿀 수 없다


	EquipPtr(nullptr);

	int ItemEquip = 0;
	EquipRef(ItemEquip);
	TestFunction(2000);
}