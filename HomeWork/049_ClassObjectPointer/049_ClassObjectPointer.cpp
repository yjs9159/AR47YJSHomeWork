#include <iostream>

class Player
{
public:
    void Damage(/*Player* const this*/)
    {

        printf_s("맞았습니다");
    }
public:
    int Hp = 100;
    int att = 10;
};



int main()
{
    int Value = int();
    Player NewPlayer = Player();

    int* ValuePtr = nullptr;
    Player* NewPlayerPtr = &NewPlayer;

    NewPlayerPtr = nullptr;
    NewPlayerPtr->Damage();

    //ValuePtr = nullptr;
    //// nullptr 익셉션이 난다
    //*ValuePtr = 20;

    //NewPlayerPtr = nullptr;
    //NewPlayerPtr->Hp = 20;
}