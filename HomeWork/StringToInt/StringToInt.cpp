#include <iostream>

//void StringToInt(const char* _string)
//{
//
//    int count = 0;
//
//    while (true)
//    {
//        char thisCharacter = _string[count];
//
//        if (thisCharacter == NULL)
//            break;
//
//        ++count;
//    }   //count 가 자릿수
//
//    int result = 0;
//
//    for (int i = count; i > 0; --i)
//    {
//        char thisCharacter = _string[i - 1];
//
//        int num = 1;
//        for (int j = count - i; j > 0; --j)
//        {
//            num *= 10;
//        }
//
//        result += (thisCharacter - '0') * num;
//        printf_s("%c", result);
//    }
//
//}
int main() 
{
    std::string myString = "dasdas";
    int myInteger = 0;
    for (int i = 0; i < myString.length(); i++) {
        myInteger = myInteger * 10 + (myString[i] - '0');
    }
    printf_s("%d", myInteger);
    return 0;
}