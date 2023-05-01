// 헤더파일에는 선언만 두고 cpp파일에 실체를 둔다

#pragma once // => 한 cpp파일 내의 헤더 중복 제거
// 헤더가 여러번 선언되어 있으면 다 지운다
 
class Player
{
public:
	Player();
	void Damage(int _Damage);

private:
	int Hp = 100;
	int Att = 10;
};
