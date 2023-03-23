#include <iostream>

class Player
{
public:
    int Hp = 100;
    int Att = 10;
};



int main()
{
    int Value = int();
    Player NewPlayer = Player();

    int* ValuePtr = nullptr;
    Player* NewPlayerPtr = &NewPlayer;

    ValuePtr = nullptr;
    // nullptr 익셉션이 난다
    *ValuePtr = 20;
}