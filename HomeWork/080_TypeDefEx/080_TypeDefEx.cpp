#include <iostream>

// typedef 앞에 * 붙이는거
typedef int MYINT, *MYTEST;
// MYTEST는 int*와 같다


// c와 c++의 구조체의 차이는
// c는 멤버함수를 넣을 수가 없다 (객체지향이 아니기 때문)

struct __tagPlayer
{
	int Hp;
	int Att;
};

typedef struct __tagPlayer Player;

// 선언과 동시에 typedef를 할 수 있다
typedef struct __tagPlayer
{
	int Hp;
	int Att;
} Player;

int main()
{
	{
		// c에서는 
		// struct Player NewPlayer;
		// 로 선언해야 한다 (안 그러면 컴파일 에러남)
		Player NewPlayer;
	}
	int* Ptr0 = nullptr;
	MYTEST ptr1 = nullptr;

	
}