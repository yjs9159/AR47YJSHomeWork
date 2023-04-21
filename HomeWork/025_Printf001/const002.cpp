#include <iostream>

int main()
{
	{
		int Value0 = 10;
		int Value1 = 10;

		int* Ptr = &Value0;
		const int* cPtr = &Value1;

		// 자료형*
		const int* cPtr = &Value1;
		// *뒤에 뭔가를 붙이는 건 이제부터 *에 영향을 주는 문법이 된다

		// const int*
		// 포인터형 변수가 사용할 때 *을 붙인다는 것은
		// 자신의 자료형에서 *을 뺀 자료형으로 사용하겠다는 뜻이다
		// ex) *Ptr
		// Ptr == const int*
		// *Ptr == const int
		// *cPtr = 20;
		const int ValueTTT0 = 10;

		// int const ValueTTT1 = 10;
		// ValueTTT0과 ValueTTT1은 완전히 동일하지만 const int로 쓰자

		int const Value00 = 10;
		// Value00 = 20; => 안고쳐짐
		const int Value01 = 10;
		// Value01 = 30; => 안고쳐짐
		// const를 앞에 붙이든 뒤에 붙이든 둘 다 똑같이 안고쳐짐
	}

	{
		// 100번지에 있는 A
		char Test0 = 'A';
		// 110번지에 있는 B
		char Test1 = 'B';

		// 120번지에 있는 100번지
		const char* Chr = &Test0;
		// const char라서 변경X
		// *Chr = 'C'
		
		// Chr = &Test1; <= 이건 된다

		// 100번지 안에 있는 값을 const화 시키는게 아니라 
		// 지금 Chr이 가리키는 100번지(주소)라는 것 자체를 다시는 못 바꾸게 하고 싶으면
		// 값도 못 바꾸고 가리키는 것도 못 바꾸게 된다
		const char* const Chr = &Test0;

		// 별을 기준으로
		// 별 앞 쪽은 내가 가리키고자 하는 대상의 값이고
		// 별 뒤 쪽은 
		// 자료형을 바꾸지 않겠다 | 주소값을 바꾸지 않겠다  
		// const char            * const           Chr = &Test0;

	}

	{
		// 상수화 변수는 무조건 초기화 해줘야 한다
		const int Value = 0;
	}

}