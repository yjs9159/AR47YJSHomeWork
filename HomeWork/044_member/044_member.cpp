#include <iostream>


// 어느 영역에도 속하지 않는 곳을 전역이라고 한다


// 전역에 선언된 변수인 전역변수
int GlobalValue = 10;

// 전역 안에 선언된 함수인 전역함수(Test 전역함수)
void Test()
{

}

// 사용자 정의 자료형 내부의 공간을 멤버공간이라고 한다
class Player
{
public:
    // 멤버함수라고 부르고
    void Damage(int _Att)
    {
        // 여긴 다시 지역이라고 부른다
        int Value = 20;
    }

private: // 디폴트가 private지만 명확하게 선언하기
    int Hp; // <= 멤버변수라고 부른다
};
int main()
{
    // c++에서 영역에 대한 구분은
    // 전역 지역 멤버 이름있는 NameSpace

}