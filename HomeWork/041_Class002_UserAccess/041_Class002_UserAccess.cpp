#include <iostream>

class Player
{ // 클래스의 시작
	// 클래스 문법에서는 속성의 시작과 행동을
	// 내가 외부에 공개할지 안할지를 결정할 수 있다

// 접근제한 지정자라고 부른다
// public 접근제한 지정자를 썼다
// 접근제한 지정자는 만들어진 위치부터 아래까지 새로운 접근제한 지정자가
// 없으면 전부 다 자신의 접근 제한 지정자로 판단한다

	//				내부코드		자식코드		외부
public:			   // 공개		  공개		공개
	int Att = 10;
	int Def = 2;
protected:		   // 공개		  공개		비공개
	int Hp = 100;
private:		   // 공개		  비공개		비공개
	int Speed = 3;
}; // 클래스의 끝
// 이 안에 안들어있으면 다 외부이다

class Monster
{
private: // 디폴트 접근제한 지정자는 private이다
	int Att = 10;
	int Def = 2;	
	int Hp = 100;
	int Speed = 3;

	// 클래스 내부
public:
	int GetHp()
	{
		return Hp;
	}

	void SetHp(int _Hp)
	{
		Hp = _Hp;
		
		if (Hp == 0)
		{
			int a = 0;
		}
	}
};

int main()
{
   // 외부

	Monster NewMonster;
	NewMonster.SetHp(20);
	NewMonster.SetHp(0);

	Player NewPlayer = Player();
	NewPlayer.Att = 20;
}
