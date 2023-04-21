#include <iostream>

// 가변인자는 인자를 넣어주는 부분에 ...만 넣는다
void VarFunction(...)
{

}

void TestFunction(int _1, int _2, int _3)
{
    int* ValuePtr0 = &_1;
    int* ValuePtr1 = &_2;
    int* ValuePtr2 = &_3;

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
    // 가변인자는 자료형과 갯수가 상관이 없다
    VarFunction("1", "2", "3", "4");
    // 섞여도 된다
    VarFunction("1", 2, 3, "하하하하");
    

    TestFunction(10, 20, 30);

    TestFunction2(5, 1, 2, 3, 4, 5);
}