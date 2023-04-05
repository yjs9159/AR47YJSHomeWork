#include <iostream> // CRTdbg가 포함되어 있다
int main()
{
	// 윈도우 전용 삭제하지 않은 힙 메모리 출력에 표시

	int* Newint = new int();

	if (nullptr == Newint)
	{
		return;
	}
	delete Newint;

	// 지운거 또 지우기
	// 댕글링 포인터라고 한다
	{
		int* Newint = new int();

		// 안전한 삭제
		if (nullptr != Newint)
		{
			delete Newint;
			Newint = nullptr;
		}

		delete Newint;
		// 메모리 크러쉬라고 한다
		//delete Newint;
	}



}
