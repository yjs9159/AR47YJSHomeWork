// ������Ͽ��� ���� �ΰ� cpp���Ͽ� ��ü�� �д�

#pragma once // => �� cpp���� ���� ��� �ߺ� ����
// ����� ������ ����Ǿ� ������ �� �����
 
class Player
{
public:
	Player();
	void Damage(int _Damage);

private:
	int Hp = 100;
	int Att = 10;
};
