#include <iostream>
#include "GameEngineArray.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	GameEngineArray NewArr(0);
 

	// int* Arr = new int[0];

	{
	// 컴파일러에서 지원하는 Arr형에는
	// operator = 함수를 구현하지 않았다
	int Arr0[10] = {0, 1, 2, 3, 4, 5, 6};
	int Arr1[10];

	// Arr1 = Arr0;
	}

	{
		//				 600번지
		// int* ArrPtr = new int[20]
		GameEngineArray Array0(10);

		for (size_t i = 0; i < Array0.Count(); i++)
		{
			Array0[i] = i;
		}

		//			700번지
		// ArrPtr = new int[10];
		// ReSize가 더 커져도 문제가 없도록 만들어야 한다
		// 숙제1 기존의 데이터를 보존하는 것을 말하는 것이고
		// 숙제2 줄어들든 커지든 데이터는 보존되어야 한다
		Array0.ReSize(5);

		for (size_t i = 0; i < Array0.Count(); i++)
		{
			printf_s("%d\n", Array0[i]);
		}
	}

	{
		GameEngineArray Array0(10);
		GameEngineArray Array1(5);

		// 숙제 3 이게 왜 터지는지 이해하고 고쳐라
		Array1 = Array0;
	}

	{
		GameEngineArray Array0(10);
		GameEngineArray Array1(5);

		for (size_t i = 0; i < Array0.Count(); i++)
		{
			Array0[i] = i;
		}

		// 숙제 4 완전히 동일한 배열이 되게 만들기
		Array1 = Array0;
		// Array1 10개짜리 배열이 되고 0 1 2 3 4 5 6 7 8 9가 다 들어가게

		for (size_t i = 0; i < Array1.Count(); i++)
		{
			printf_s("%d\n", Array1[i]);
		}
	}
}