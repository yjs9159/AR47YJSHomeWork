#include <iostream>

class Player
{
private:
    int Hp = 100;
    int Att = 10;

public:
    Player()
    {

    }
    void Damage(/*Player const this */int _Att)
    {
        // 눈에 보이지 않지만 멤버함수에는
        // 첫번째 인자로 무조건 자기자신의 클래스의 포인터가 들어가게 된다
        this->Hp -= _Att;
    }

    inline int GetHp()
    {
        return Hp;
    }

    inline void SetHp(int _Value)
    {

    }

    //void GlobalDamage(Player* _NewPlayer, int _Att)
    //{
    //    // 클래스를 포인터로 사용할때는
    //    // 내부에 있는 멤버 변수에 접근하는 방식이
    //    // .이 아니고 ->로 변경된다
    //    _NewPlayer->Hp -= _Att;
    //}
};
int main()
{
    std::cout << "Hello World!\n";
}
