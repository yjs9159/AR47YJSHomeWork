
#include <iostream>

void MyPrintf(const char* const _ptr)
{
    // putchar(_ptr[0]); // 글자 하나를 콘솔 화면에 띄어주는 함수
    // putchar(_ptr[1]);
    // putchar(_ptr[2]);

    // 기본적인 printf문의 구성
    int Count = 0;
    while (0 != _ptr[Count])
    {
        char ch = _ptr[Count];
        putchar(ch);
        ++Count; // Count += 1;
    }
}

int main()
{

    const char ArrTest[2] = { 'a', 'b' };
    MyPrintf("test Print");
    const char* Ptr = "test Print";
    

    // random index access
    char ch0 = Ptr[0];

    char ch0 = Ptr[0];       
    char ch1 = Ptr[1];
    char ch2 = Ptr[2];
    char ch3 = Ptr[3];
    char ch4 = Ptr[4];
    char ch5 = Ptr[5];
    char ch6 = Ptr[6];
    char ch7 = Ptr[7];
    char ch8 = Ptr[8];
    char ch9 = Ptr[9];
    char ch10 = Ptr[10];
    char ch11 = Ptr[11];
    char ch12 = Ptr[12];
    char ch13 = Ptr[13];

    MyPrintf(Ptr);
}