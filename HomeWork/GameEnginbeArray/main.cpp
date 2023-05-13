#include <iostream>
#include "GameEngineArray.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	{
	// 컴파일러에서 지원하는 Arr형에는
	// operator = 함수를 구현하지 않았다
	int Arr0[10] = {0, 1, 2, 3, 4, 5, 6};
	int Arr1[10];

	// Arr1 = Arr0;
	}

	{
		//					 600번지
		// int* ArrPtr = new int[20]
		GameEngineArray Array0(20);
		// GameEngineArray Array1;

		Array0.ReSize(10);

		// Array0 = Array1

		for (size_t i = 0; i < Array0.Count(); i++)
		{
			Array0[i] = i;
		}

		for (size_t i = 0; i < Array0.Count(); i++)
		{
			printf_s("%d\n", Array0[i]);
		}
	}
}