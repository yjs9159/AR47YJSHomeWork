#include <iostream>

// 가변 인자
void VarFunction(...)
{

}

//                100     108     116 
void TestFunction(int _1, int _2, int _3)
{
    int* ValuePtr0 = &_1;
    int* ValuePtr1 = &_2;
    int* ValuePtr2 = &_3;

    int Value1 = ValuePtr0[0];
    int Value2 = ValuePtr0[2];
    int Value3 = ValuePtr0[4];

    __int64 Address0 = 0;
    __int64 Address1 = 0;
    __int64 Address2 = 0;

    Address0 = (__int64)ValuePtr0;
    Address1 = (__int64)ValuePtr1;
    Address2 = (__int64)ValuePtr2;

}

void TestFunction2(int _1, ...)
{

}
int main()
{
    VarFunction(2, 3, 4, 7, 9, 1, 1, 1, 1, 1);

    VarFunction("1", "2", "3", "4");

    VarFunction("1", 2, 3, "하하하하");

    TestFunction(10, 20, 30);

    TestFunction2(5, 1, 2, 3, 4, 5);
}