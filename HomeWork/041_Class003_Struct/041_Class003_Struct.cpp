#include <iostream>

class Player
{
// private: class의 디폴트 접근제한 지정자
private:
    int Att = 10;
    int Def = 2;
    int Hp = 100;
    int Speed = 3;

};

struct Monster
{
// public: struct의 디폴트 접근제한 지정자
public:
    int Att = 10;
    int Def = 2;
    int Hp = 100;
    int Speed = 3;

};
int main()
{
    Player NewPlayer;
    Monster NewMonster;

    Player Newplayer = Player();

    // 보통 행동을 만들 public으로 만든다

    // 객체의 사용법 => .누르고
    // 플레이어 내부에 있는 것들을 끄집어 내서 사용한다
    // NewPlayer.Att
}