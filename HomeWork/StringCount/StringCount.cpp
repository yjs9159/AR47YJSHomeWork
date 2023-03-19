#include <iostream>



unsigned int StringCount(const char* _string)
{
    int Count = 0;
    while (true)
    {
        char thisCharacter = _string[Count];

        if (thisCharacter == NULL)
            break;

        ++Count;
    }
    printf_s("%d", Count);
    return Count;
}



int main()
{
    
    // int Return0 = StringCount("aaaa");
    int Return1 = StringCount("aaaa ggg sss");

    
    
}

