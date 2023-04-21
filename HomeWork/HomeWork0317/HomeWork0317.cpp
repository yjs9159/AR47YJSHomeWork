#include <iostream>

// 영어만 씁니다.

// 문자열을 넣어주면 글자 개수를 알아냅니다.
// 0을 포함할지 아닐지는 스스로 정하세요
int StringCount(const char* _String)
{
    int Count = 0;
    while (true)
    {
        char thisCharacter = _String[Count];

        if (thisCharacter == NULL)
        {
            break;
        }
        Count++;
    }
    printf_s("%d", Count);
    return Count;
}

int TrimDelete(char* _String)
{
    int Count = 0;

    while (true)
    {
        char thisCharacter = _String[Count];

        if (thisCharacter == NULL)
        {
            break;
        }

        if (thisCharacter != ' ')
        {
            printf_s("%c", thisCharacter);
        }

        Count++;
    }
    return Count;
}

int StringToInt(const char* _string)
{

    int count = 0;

    while (true)
    {
        char thisCharacter = _string[count];

        if (thisCharacter == NULL)
            break;

        ++count;
    }

    int result = 0;

    for (int i = count; i > 0; --i)
    {
        char thisCharacter = _string[i - 1];

        int num = 1;
        for (int j = count - i; j > 0; --j)
        {
            num *= 10;
        }

        result += (thisCharacter - '0') * num;
    }
    return 0;
     
}

int main()
{
    // int Return0 = StringCount("aaaa");
    // int Return1 = StringCount("aaaa ggg ss");

    char Arr0[1024] = "a b c d e";
    char Arr1[1024] = "a    b c    d    e";
    char Arr2[1024] = "ab    cde    ";

    // TrimDelete(Arr0);
    // TrimDelete(Arr1);
    // TrimDelete(Arr2);

    // 영어나 다른글자가 섞여 들어가있는것을 가정하지 않는다.
    int RValue0 = StringToInt("1111");
    //int RValue1 = StringToInt("432");
    //int RValue2 = StringToInt("4523312");
    //int RValue3 = StringToInt("432231");

}