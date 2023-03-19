#include <iostream>

char TrimDelete(const char* _string)
{
    
    int Count = 0;
    while (true)
    {
        char thisCharacter = _string[Count];

        if (thisCharacter == NULL)
            break;

        if (thisCharacter != ' ')
        {
            printf_s("%c", thisCharacter);
        }

        ++Count;
    }
    return Count;
    
}


int main()
{

    const char* test = "ab    cde    ";
    TrimDelete(test);
    /*char Arr0[1024] = "a b c d e";
    char Arr1[1024] = "a    b c    d    e";
    char Arr2[1024] = "ab    cde    ";*/
}
