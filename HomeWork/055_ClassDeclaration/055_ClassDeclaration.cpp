#include <iostream>


// 순환 참조라고 한다
// 순환 참조를 해결하는 방법은
// 선언과 구현의 철저한 분리이다

// Monster라는 클래스가 있을거야 믿고 써
// 내용은 나중에 알려줄게
// 클래스 전방선언
class Monster;
class Player
{
public:
	int Att = 10;
	int Hp = 100;

public:
	// 이건 몬스터가 쓸거야.. 라는 뜻이 아니라
	// 몬스터를 알아야 한다

	// 내부에서 Monster의 내용을 사용하게 되면
	// 전방선언으로도 해결이 안된다
	// Monster가 Hp를 가지고 있는지 알아야겠다 <- 컴파일러가
	void Attack(Monster* _Monster);
	//{
	//	// 몬스터는 Hp를 가졌어?
	//	// 몬스터의 크기는 얼마야?
	//	// 몬스터는 어떤 생성자를 가지고 있어?
	//	_Monster->Hp -= Att;
	//}

	// 8바이트 주소값을 받아서 외부로 8바이트 주소값을 리턴하기만 하면 되는 함수
	// Monster의 실체(Monster 내부의 멤버변수나 멤버함수를 사용하지 않았기 때문에 필요가 없다
	Monster* Test(Monster* _NewMonster)
	{
		return _NewMonster;
	}

	// 값형으로 쓴 함수 => Monster의 실체를 썼기 때문에 안된다
	// 함수의 실행메모리를 정하려면? => 함수의 인자의 크기를 알아야 한다
	// Monster의 크기를 알아야한다
	// Monster의 크기는 뭐에 의해서 결정될까? 멤버변수들의 개수와 종류로 결정된다
	// 즉 Monster의 내용을 몰라도 되는 코드면 전방선언만으로 충분하다
	// 근데 Monster 내부의 내용을 알아야하면
	Monster Test2(Monster _NewMonster)
	{
		return _NewMonster;
	}
};

class Monster
{
public:
	int Att = 10;
	int Hp = 100;

public:
	void Attack(Player* _Player);
	/*{
		_Player->Hp -= Att;
	}*/


};

int main()
{
	Player NewPlayer;
	Monster NewMonster;

	NewPlayer.Attack(&NewMonster);
	NewMonster.Attack(&NewPlayer);
}

void Player::Attack(Monster* _Monster)
{
	_Monster->Hp -= Att;
}

void Monster::Attack(Player* _Player)
{
	_Player->Hp -= Att;
}
