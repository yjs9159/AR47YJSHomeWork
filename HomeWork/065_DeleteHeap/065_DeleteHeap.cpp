#include <iostream> // crtdbg.h가 iostream 안에 들어있다



void main()
{
	// new를 쓸거면 코드 최상단에 일단 이걸 걸어놓고 시작해야 한다
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// 중복 할당
	{
		int* Newint = new int();
		Newint = new int();
		delete Newint;
	}

	// 아래와 같이 한번 할당한 것은 지우고 다시 받아서 사용하면 된다
	{
		int* Newint = new int();
		delete Newint;
		Newint = new int();
		delete Newint;
	}

	{
		int* Newint = new int();

		// 포인터는 null체크를 하고 써야 한다
		// 이게 습관이 되야 한다
		if (nullptr == Newint)
		{
			return;
		}
		delete Newint;

	}
	
	// 지운거 또 지우기
	// 댕글링 포인터라고 한다
	{
		int* Newint = new int();

		delete Newint;
		delete Newint;
		// 이걸 메모리 크러쉬라고 한다
	}

	{
		int* Newint = new int();

		// 모든 포인터를 지웠다면 null로 만들어 줘야 한다
		// 안전한 삭제 방법 (null이 아닌 것만 delete 하는것)
		if (nullptr != Newint)
		{
			delete Newint;
			Newint = nullptr;
		}
	}
}
