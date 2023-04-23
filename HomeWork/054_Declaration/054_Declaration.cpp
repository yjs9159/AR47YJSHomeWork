
#include <iostream>

// 구현이라고 하는 문법은
// 선언과 함수체를 같이 놓은 문법을 구현이라고 부른다

// 함수 선언만 따로 놓을 수가 있다

void Function();

// 함수 선언
void Function()
// 함수체
{

};

// 이러이러한 함수가 있을거야
// 일단 믿고 호출하고 컴파일해줘
// 구현은 분명히 나중에 있을거야
void Function0();			
void Function1();

// 전역 함수의 경우에는 선언은 몇개를 해도 상관 없다
void Function2();
void Function2();
void Function2();
void Function2();
void Function2();
void Function2();
void Function2();
void Function2();

// 클래스는 문법상 선언과 구현이 내부에서 혼재되어 있을수도 있고
// 아닐수도 있는 특이한 놈이라서 
// 클래스 자체는 2개를 선언할 수 없다 
class Player
{
public:
	// static 멤버변수의 경우에는 const가 붙으면 구현체를 따로 둘 수 없다
	// 리터럴 초기화가 가능하다
	// 상수로 생각해서 코드영역에 위치시키기 때문이다
	// 앞으로 Player::GValue0은 다 0으로 바꾼다 라는 뜻
	// 어차피 내가 지금 읽었을 때 0이라는 것을 읽었으니 이건 앞으로 절대 안바뀔거잖아?
	// const고? 그러니까 앞으로 GValue0이 보이면 그냥 0인거네
	// 그럼 컴파일러인 나는 다 exe파일 만들 때 GValue0이 보이면 다 0으로 만들어 버려야지

	static const int GValue0 = 0;

	// static 멤버변수의 경우에는 const가 안붙으면 이녀석은 데이터영역에 위치하게 되고
	// 선언으로만 치게 되고 리터럴 초기화가 불가능해진다
	// Player에 속한 static 전역변수인 GValue1가 있을거야... 라는 뜻
	static int GValue1 /*= 0*/;

private:
	// static 함수의 경우 멤버함수와 동일한 규칙을 적용한다
	static void	GlobalFunction()
	{

	}

public:
	// 일반적인 멤버변수는 이미 그 자체로 선언이면서 구현이다
	// 따로 실체를 둘 필요가 없다
	int Hp;

public:
	// 클래스 내부에서 구현을 해버리면
	// 이 함수는 구현까지 끝난것으로 보고
	// 외부에서 구현해주면 똑같은 함수를 2개 구현한것으로 본다
	void StatusRender()
	{

	}

	// 클래스 내부의 함수는 별개로 선언만 놔둘 수 있다
	void Damage();

public:
	// 클래스 내부의 함수는 별개로 선언만 놔둘 수 있다
	Player();

	Monster* NewMonster;

};

// 이게 GValue1의 실체
// const가 아닌 static은 데이터영역에 위치하게 되고 문법적으로 실체를 만들어 줘야 한다
int Player::GValue1 = 10;


// 멤버함수의 FullName은 무조건 
// 클래스명::함수이름으로 인식해야 한다
void Player::Damage()
{

}

Player::Player()
{

}

void Function0()			// Function0은 Function2를 호출해야 한다
{
	Function2();			// 이 코드가 실행 될 때 Function2는 아직 모르는 상태
}							// 그러므로 함수를 선언 먼저 하고 구현을 나중에 한다
void Function1()			// Function1은 Function0을 호출해야 한다
{
	Function0();
}
void Function2()			// Function2는 Function0을 호출해야 한다
{
	Function0();
}
// 보통 구현은 main함수 밑으로 뺀다


class Monster
{

}

int main()
{
	Player::GValue1 = 20;

	Function0();
	Function1();
	Function2();
}