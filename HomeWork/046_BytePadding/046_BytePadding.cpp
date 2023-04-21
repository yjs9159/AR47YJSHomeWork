#include <iostream>

// short는 2바이트 정수형
class Player
{
public:
	int Hp;				// 4	4
	short Value3;		// 2	4
	int Value4;			// 4	4
	short Value9;		// 2	4
	char TTT;			// 1

	// 8바이트 이하 가장 큰 바이트의 자료형을 찾고
	// 4바이트
	// 먼저 4바이트를 할당했다고 쳐보자
	// 딱 맞거나 들어갈 수 있으면 그대로 픽스
	// 4바이트 할당한다
	// char
	// 8바이트

};
int main()
{
	// 500번지의 플레이어를 대표하는 NewPlayer
	Player NewPlayer;

	// 99퍼센트의 경우 FullName을 사용하지 않지만
	// 실질적으로 FullName인 것을 알아야 한다
	NewPlayer./*Player::*/Hp;

	// 일반적으로 멤버변수일 경우에는 아무런 의미가 없다
	// Player::Hp;

	

	int* Ptr = &NewPlayer.Hp;

	int Size = sizeof(Player);

	printf_s("%d", Size);
	std::cout << sizeof(Player) << std::endl;	

}   
