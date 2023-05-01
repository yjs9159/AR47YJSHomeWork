#include <iostream>

class Player
{
public:
	static void GlobalFunction()
	{
		// 객체가 필요없이 호출할 수 있기 때문에
		// == this가 필요로 하지 않는 함수가 된다
		// this가 존재하지 않으므로 함수 뒤에 const를 붙일 수 없게 된다
		// const로 만들 this가 없게 되는 것이기 때문
	}


	int GetHp() const
	{
		return Hp;
	}

	void SetHp(int _Value)
	{
		Hp = _Value;
	}

	// 멤버함수 뒤에는 const를 붙일 수 있다
	
	// 멤버함수 뒤에 const를 붙이면
	// 이 함수를 호출한다고 해도
	// 이 클래스를 통해서 만들어진 객체는 변화하지 않는다
	void PrintStatus() const
	// PrintStatus함수의 인자로 (Player* const this)가 생략되어 있는데 멤버 함수 뒤에 const를 붙이면
	// const Player* const this 로 바뀌게 된다
	{

		/*Att += 100;*/ // 멤버함수 뒤에 const를 붙이면 멤버변수를 고칠 수 없다

		printf_s("플레이어의 능력치 ----------------------\n");

		printf_s("공격력 : %d\n", Att);

		printf_s("체력 : %d\n", Hp);

		printf_s("--------------------------------------\n");
	}

protected:

private:
	int Hp = 100;
	int Att = 10;
};


int main()
{
	Player NewPlayer = Player();

	NewPlayer.PrintStatus();
}