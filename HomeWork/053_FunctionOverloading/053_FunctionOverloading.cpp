
#include <iostream>

// Function
void Function()
{
	printf_s("void Function()\n");
}

// Function int
void Function(int _Value)					// 위의 함수와 이름이 같지만 된다
{
	printf_s("void Function(int _Value)\n");
}

void Function(int _Value, int _Test)
{
	printf_s("void Function(int _Value, int _Test)\n");
}

// 리턴값은 함수 오버로딩에 영향을 주지 않는다
//int Function(int _Value, int _Test)
//{
//	printf_s("void Function(int _Value, int _Test)\n");
//}

void Function(short _Value, int _Test)
{
	printf_s("void Function(short _Value, int _Test)\n");
}

// 함수라고 불리는 녀석들에게는 모두 적용된다

class Player
{
public:
	void Function()
	{
		printf_s("void Function()\n");
	}

	void Function(int _Value)
	{
		printf_s("void Function(int _Value)\n");
	}

	void Function(int _Value, int _Test)
	{
		printf_s("void Function(int _Value, int _Test)\n");
	}

	void Function(short _Value, int _Test)
	{
		printf_s("void Function(short _Value, int _Test)\n");
	}
	
public:
	Player()		// 생성자이지만 어쨌든 특수한 함수 
	{

	}

	Player(int Value0)
	{

	}

	Player(int Value0, int Value1)
	{

	}
};

int main()
{
	Function();
	Function(10, 10);
	Function((int)10, 10);
	Function((short)10, 10);


	Player NewPlayer0 = Player();
	Player NewPlayer1 = Player(10);
	Player NewPlayer2 = Player(10, 20);

	NewPlayer0.Function();
	NewPlayer0.Function(10);
	NewPlayer0.Function(10, 20);
}
