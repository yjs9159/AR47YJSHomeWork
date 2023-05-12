#include <iostream>
#include <crtdbg.h>

class Monster
{

};

int main()
{
	// 외우기
	// 윈도우 전용 삭제하지 않은 힙 메모리 출력에 표시
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Monster* PtrMonster = new Monster();

	while (true)
	{

	}
	// 강제 종료의 경우에는 어쩔 수 없이 릭이 남을 수 있지만 	
	delete PtrMonster;
	
	
	// 연산자   자료형  생성자
	// new     자료형 ();

	// 힙은 가장 자유롭게 메모리를 할당할 수 있는 영역이다

	int Value = 20; // Value 자체가 주소값을 의미하게 되는데
	// new는 이름이 없기 때문에 
	// 받지 않으면 힙에 만들어진 메모리를 잃어버리므로 무조건 받아야 한다
	// new int(); // 잃어버린 힙 -> 이렇게 사용하면 안된다
	// 이건 주소값을 받지 않았기 때문에 절대로 지울 수 없다
	
	int* Ptr = /*operator new*/ new int(); // 힙에 만들어진 int의 주소값을 준다
	
	*Ptr = 20;


	
	delete Ptr; // 이건 주소값을 받았기 때문에 지울 수 있다 (delete 함수를 통해서)
	// 힙 영역을 할당하고 지우지 않으면 메모리 누수(Leak)가 생기는데
	// 그것 때문에 프로그램을 종료해도 느려지는 경우는 없다
	// (프로그램은 느려질 수 있어도 내 윈도우가 느려지는 경우는 없다)
	// 내 게임이 느려지지 않게 하기 위해서 무조건 지워줘야 한다




	//while (true)
	//{
	//	new int();
	//}
	
}



{




}