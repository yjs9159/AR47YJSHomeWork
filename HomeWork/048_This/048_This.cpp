// 0323 this
#include <iostream>

class Player
{
public:
	Player()
	{

	}
	void Damage(/*Player const this*/ int _Att)
	{
		// __int64 Address = (__int64) &Hp;
		// 눈에 보이지 않지만 멤버함수에는
		// 첫번째 인자로 무조건 자기자신의 클래스의 포인터가 들어가게 된다

		// * const이기 때문에 this가 가리키는 대상을 바꿀 수 없다
		// this = nullptr; <= 안됨
		this->Hp -= Att;
	}

	inline int GetHp()
	{
		return Hp;
	}
		
	inline void SetHp(int _Value)
	{
		Hp = _Value;
	}

	inline int GetAtt()
	{
		return Att;
	}

	inline void SetAtt(int _Value)
	{
		Att = _Value;
	}

	
	
protected:
	
public:
	int Hp = 10;
	int Att = 100;
};

void GlobalDamage(Player* _NewPlayer, int _Att)
{
	_NewPlayer->Hp -= _Att;
}

//void GlobalDamageValue(Player _NewPlayer, int _Att)
//{
//	// 클래스를 포인터로 이용할 때는
//	// 내부에 있는 멤버변수에 접근하는 방식이
//	// .이 아니고 ->로 변경된다
//	_NewPlayer.Hp -= _Att;
//}

void Test(int _Value)
{

}

int main()
{
	int Value = 30;

	Test(Value);

	// NewPlayer0은 100의 Hp를 가지고 있을것이다
	Player NewPlayer0 = Player();

	// NewPlayer1도 100의 Hp를 가지고 있을것이다
	Player NewPlayer1 = Player();
	
	// GlobalDamage(&NewPlayer0, 20);

	//Damage함수가 실행되면 Hp가 80이 될것이다
	NewPlayer0.Damage(20);

	// GlobalDamage(&NewPlayer1, 50);


	//Damage함수가 실행되면 Hp가 50이 될것이다
	NewPlayer1.Damage(50);


	/*NewPlayer.SetAtt(100);
	NewPlayer.SetHp(100);*/


}