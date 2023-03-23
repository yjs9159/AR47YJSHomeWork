#include <iostream>
#include <conio.h>

//void Total(
//    const char* const _AttackerName,
//    const char* const _DefenderName,
//    const int& _AttackerAtt,
//    const int& _DefenderAtt,
//    int& _AttackerHp,
//    int& _DefenderHp
//)
//{
//    printf_s("%s 의 스테이터스 ------------\n", _AttackerName);
//    printf_s("공격력 : %d\n", _AttackerAtt);
//    printf_s("체력 : %d\n", _AttackerHp);
//    printf_s("---------------------------\n");
//
//    printf_s("%s 의 스테이터스 ------------\n", _DefenderName);
//    printf_s("공격력 : %d\n", _DefenderAtt);
//    printf_s("체력 : %d\n", _DefenderHp);
//    printf_s("---------------------------\n");
//
//    printf_s("%s가 공격을 시작합니다\n", _AttackerName);
//    printf_s("%s가 %d의 데미지를 입었습니다.\n", _DefenderName, _AttackerAtt);
//}

void Damage(
    const char* const _AttName, // 때리는 쪽의 이름
    const char* const _DefName, // 맞는 쪽의 이름
    const int& _Att,  // 때리는 쪽의 공격력
    int& _Hp // 맞는 쪽의 체력
)
{
    printf_s("%s가 공격을 시작합니다\n", _AttName);
    printf_s("%s가 %d의 데미지를 입었습니다.\n", _DefName, _Att);
    _Hp -= _Att;

}

void StatusRender(
    const char* const _Name, // 때리는 쪽의 이름
    const int& _Att,  // 때리는 쪽의 공격력
    const int& _Hp // 맞는 쪽의 체력
)
{
    printf_s("%s 의 스테이터스 ------------\n", _Name);
    printf_s("공격력 : %d\n", _Att);
    printf_s("체력 : %d\n", _Hp);
    printf_s("---------------------------\n");
}

int main()
{

    int PlayerHp = 100;
    int PlayerAtt = 10;

    int MonsterHp = 100;
    int MonsterAtt = 10;

    while (true)
    {
        system("cls");
        // 추후설명
        // 콘솔 화면에 모든 글자를 지웁니다.

        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        _getch();

        Damage("Player", "Monster", PlayerAtt, MonsterHp);
        system("cls");
        // Total("Player", "Monster", MonsterAtt, PlayerAtt, PlayerHp, MonsterHp);
        _getch();

        if (0 >= MonsterHp)
        {
            printf_s("몬스터가 죽었습니다.");
            printf_s("플레이어의 승리입니다.");
            _getch();
            break;
        }

        system("cls");
        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        _getch();
        Damage("Monster", "Player", MonsterAtt, PlayerHp);
        system("cls");
        // Total("Player", "Monster", PlayerAtt, MonsterAtt, PlayerHp, MonsterHp);
        _getch();

        if (0 >= PlayerHp)
        {
            printf_s("플레이어가 죽었습니다.");
            printf_s("몬스터의 승리입니다.");
            _getch();
            break;
        }
    }
}