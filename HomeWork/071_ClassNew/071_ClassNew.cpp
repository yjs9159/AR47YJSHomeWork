#include <iostream>

class Test
{
    char* ArrChar;

public:
    void ReSize(size_t Size)
    {
        ArrChar = new char[Size];
        // ArrChar은 char*로 있고 그 char*를 배열로 여러개 만드는 코드
    }

};

int main()
{
    char* Arrint = new char();
    delete Arrint;

    // 이 녀석은 만든다는 것 자체가 
    // char*의 배열을 만든 것과 같다는 것
    Test* ArrTest = new Test();
    delete ArrTest;

    // Test ArrTest = Test();
}
