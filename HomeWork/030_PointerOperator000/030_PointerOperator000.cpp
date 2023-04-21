#include <iostream>

int main()
{

    int Value = 0;

    __int64 Address = 0;

    // 100번지
    int* Ptr = &Value;

    // 나의 주소값을 100번지 + sizeof(int) * 1;
    Address = (__int64)Ptr;
    Ptr = Ptr + 1;
    Address = (__int64)Ptr;
    Ptr = Ptr - 1;
    Address = (__int64)Ptr;
    Ptr += 1;
    Address = (__int64)Ptr;
    Ptr = Ptr + 5;
    Address = (__int64)Ptr;
}