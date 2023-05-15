#include <iostream>

#define Ten 10
// #define Ten 10;
// Ten * Ten;
// 10; * Ten; 이 되버리니까 세미콜론을 붙이면 안된다
// define은 엔터치기 전 까지의 값을 그대로 복사한다

// 함수형으로 사용하는 것
// 매크로 함수라고 하는데
#define PLUS(Value1, Value2) Value1 + Value2

// 함수의 경우에는 일반적으로 형에 대한 검사나
// 자료형에 의한 컴파일 체크를 하지만 
// 매크로 함수는 그냥 복붙이다

void Test(int _Value)
{

}

//inline void Test(int _Value)
//{
//	_Value = 20;
//}

int main()
{
	// 대부분 디파인보다 인라인을 사용하라고 한다
	// Test(20);
	// _Value = 20;

	//PLUS("aaaaa");
	//"aaaaa" + "aaaaa";

	//int* Ptr;
	//Test(Ptr);


	Ten* Ten;

}