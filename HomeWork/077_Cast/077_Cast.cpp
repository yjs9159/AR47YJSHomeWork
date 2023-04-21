

#include <iostream>

int main()
{
	{
		short Test = 20;
		int Value = (int)Test;
		// c+=에서는 별로 권장하지 않는 방식

		// 메모리 크기만 다른뿐 서로 값 형태

		Value = static_cast<int>(Test);

		// c스타일 형변환
		int Value = (int)Test; // <= static_cast<int>를 붙인다
	}



	// reinterpret_cast는 
	// 정수를 포인터로 포인터를 정수로 변경할 때 사용한다
	{
		int Value = 3;

		int* Ptr = &Value;

		__int64 Address = reinterpret_cast<__int64>(&Value);

		int* Ptr2 = reinterpret_cast<int*>(Address);

	}



	// dynamic_cast
	// 부모자식구조에서 사용된다. 다운캐스팅에 이용됨
	{

	}

	// const_cast
	{

	}
}
