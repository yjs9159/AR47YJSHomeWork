// Function Pointer
// 함수 포인터

#include <iostream>

// 이 함수도 프로세스로 메모리에 올라갈 것이기 때문에
// 위치가 있을 수 밖에 없다
// 이 위치는 정해져 있다
void PlayerAttack()
{
	printf_s("플레이어가 공격합니다.\n");
}

void PlayerMove()
{
	printf_s("플레이어가 이동합니다.\n");
}

class PlayerMoveButton
{
public:
	// void(*Ptr)();
	
	void Click()
	{
		PlayerMove();
	}

};

class PlayerAttackButton
{
public:
	// void(*Ptr)();

	void Click()
	{
		PlayerAttack();
	}

};

class UIButton
{
public:
	void(*Ptr)() = nullptr;

	void Click()
	{
		if (nullptr == Ptr)
		{
			return;
		}

		Ptr();
	}
};


// 문법적으로 어려운 부분이고
// 행동을 변수로 만드는 것이다
int main()
{
	{
		void(*Ptr)();

		// void PlayerAttack()
		// PlayerAttack 주소값을 의미하게 되니까
		// 둘의 자료형은 동일하다
		// void(*)() == void PlayerAttack();
		//		int  == 10;

		// 모든 자료형은 배열로 사용할 수 있다
		// int의 배열형은 int[] => int Arr[10]
		// 함수 포인터형의 배열형은
		// void(*[])() => void(*ArrFunctions[10])()

		// int Arr[10] = int* Ptr = Arr
		// int* Arr[10] = int** Ptr = Arr
		{
			int* Arr[10];
			int** Ptr = Arr;
		}

		{
			void(*ArrFunctions[10])();
			void(**FunctionsPtr)() = ArrFunctions;
		}

	}
	{
		UIButton PlayerAttackButton;
		UIButton PlayerMoveButton;

		PlayerAttackButton.Ptr = PlayerAttack;
		PlayerMoveButton.Ptr = PlayerMove;

		PlayerAttackButton.Click();
		PlayerMoveButton.Click();
	}
	
	{
		int ArrValue[20];
		int* Ptr = ArrValue;
		// ArrValue = int[]
		// Ptr = int*
		// *Ptr = int
		

		int* ArrTest[20];
		int** PtrAAA = ArrTest;
		// ArrTest = int*[] 
		// PtrAAA = int**
		// *PtrAAA = int*
		// PtrAAA[0] = int*
		PtrAAA[0];
	}
	
	{
		// void(*Ptr)();
		// void(*)()
		// 

		void(*ArrFunction[20])();
		ArrFunction[0] = PlayerAttack;
		void(**PtrTest)() = ArrFunction;
		PtrTest[0]();

		// ArrFunction = void(*[])()
		// PtrTest = void(**)()
		// *PtrTest = void(*)()
		// PtrTest[1] = void(*)()
		// PtrTest[0] = void(*)()
	}
	// 리턴값(* 함수 포인터명 ) (인자)
	//void (*Ptr)() = PlayerAttack;

	// 보면 마치 함수를 사용하는것 같다
	//Ptr();

	//Ptr = PlayerMove;
}

