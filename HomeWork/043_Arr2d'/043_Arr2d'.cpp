#include <iostream>

int main()
{
    // 궁극적으로 모든 배열은 결국 1차원 배열이다
     
    int Arr[2][2] = { { 1, 2}, {3, 4} };

    __int64 Address00 = (__int64)&Arr[0][0];
    int value00 = Arr[0][0];
    __int64 Address01 = (__int64)&Arr[0][1];
    int value01 = Arr[0][1];
    __int64 Address10 = (__int64)&Arr[1][0];
    int value10 = Arr[1][0];
    __int64 Address11 = (__int64)&Arr[1][1];
    int value11 = Arr[1][1];

    // nd
}
