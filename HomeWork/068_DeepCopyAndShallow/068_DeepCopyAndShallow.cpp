#include <iostream>

class A
{
public:
	int* NewInt = new int();

// operator=(const A& _Other)
//{
//	 NewInt = _Other.NewInt;
//}
	void operator=(const A& _Other)
	{
		// NewInt = _Other.NewInt;

		if (nullptr == _Other.NewInt)
		{
			//if (nullptr != NewInt)
			//{
			//	delete NewInt;
			//	NewInt = nullptr;
			//}
			return;
		}



		// 각 클래스가 자신만의 메모리를 만들어야 한다는 것이다
		*NewInt = *_Other.NewInt;

		return;
	}

	~A()
	{
		if (nullptr != NewInt)
		{
			delete NewInt;
			NewInt = nullptr;
		}
	}
};

int main()
{
	{
		A NewInt0;
		A NewInt1;

		NewInt0 = NewInt1;
	}

	//			 100번지에 있다고 치자
	int* NewInt0 = new int();
	int* NewInt1 = NewInt0;

	if (nullptr != NewInt0)
	{
		delete NewInt0;
		NewInt0 = nullptr;
	}

	if (nullptr != NewInt1)
	{
		delete NewInt1;
		NewInt1 = nullptr;
	}
}
