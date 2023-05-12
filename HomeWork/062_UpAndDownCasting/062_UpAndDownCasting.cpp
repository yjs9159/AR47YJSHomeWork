#include <iostream>

class FightUnit
{
public:

	void Damage(int _Damage)
	{
		Hp -= _Damage;
	}

	// 이 GetAtt가 각자 자식형일때는 자식들의 방식으로 동작하게 도와주는 문법이 있어야 한다
	// 그걸 virtual 가상함수 문법이라고 한다
	// 이 가상함수라는 것이 만들어지게 되면
	// 자식이 이걸 새롭게 정의하지 않는다면 부모형으로 동작하고
	// 자식이 이걸 새롭게 정의하면 자식의 형으로 동작한다
	// 이때 정의하는 방식은 부모와 완전히 동일한 함수로 정의해야 한다
	virtual int GetAtt()
	{
		return Att;
	}

private:
	int Hp = 100;
	int Att = 10;
};

class Player : public FightUnit
{
public:
	// 오버라이드 문법이라고 한다
	// 명시적으로 override했다는 것을 표현해 주는 것이 좋은데
	// 내용은 함수 뒤에 override 붙이기
	// 붙이지 않아도 되지만 명시적으로 꼭 붙이기
	int GetAtt() override
	{
		return FightUnit::GetAtt() + Lv;
	}

	//void Test() override
	//{

	//}

private:
	int Lv = 1;
};


class Monster : public FightUnit
{

};

// 업캐스팅을 이용한 함수
void Fight(FightUnit* _Left, FightUnit* _Right)
{
	// 최악의 방법은 다운캐스팅을 이용하는 것이다
	// 이게 다운캐스팅이다
	//Player* PlayerPtr = (Player*)_Left;
	//_Right->Damage(PlayerPtr->GetPlayerAtt());
	// main에서 Fight(&NewMosnter, &NewPlayer);로 바뀌면
	// Monster에는 Lv이 없기 때문에 이상한 값이 들어가게 된다

	int LeftAtt = _Left->GetAtt();
	int RightAtt = _Right->GetAtt();

	_Right->Damage(LeftAtt);
	_Left->Damage(RightAtt);
}

int main()
{
	{
		// 다운캐스팅
		// 부모형을 자식형으로 바꾼다 => 위험성이 있다
		// 강제 캐스팅이고 내가 쳐줘야한다
		FightUnit* Ptr;

		// 다운 캐스팅을 강제로 해줘야 하는 경우는 거의 없다
		Player* PlayerPtr = (Player*)Ptr;

		// 업캐스팅 => 자식형을 부모형으로 만드는 것인데 무조건 된다
		// 다운캐스팅 => 부모형을	여러개의 자식들 중 하나로 선택하는것
		// 안전하게 다운캐스팅을 하는 방법이 존재하고 그 이외의 방식으로	
		// 그냥 하면 절대로 안된다
	}

	{
		Player NewPlayer;
		Monster NewMonster;

		Player* PlayerPtr = &NewPlayer;

		// 업캐스팅이라고 한다
		FightUnit* Ptr = PlayerPtr;
		Ptr = &NewMonster;
	
		Fight(&NewPlayer, &NewMonster);
	}
}