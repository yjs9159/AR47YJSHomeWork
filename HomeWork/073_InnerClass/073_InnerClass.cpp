
#include <iostream>

class Test
{
public:
    // 이걸 이너클래스 문법이라고 한다
    // 클래스 안의 클래스
    class publicInner
    {
        publicInner()
        {

        }
    };

private:
    class privateInner
    {
        privateInner()
        {

        }
    };
};

int main()
{
    std::cout << "Hello World!\n";
}