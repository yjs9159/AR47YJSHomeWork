#include <iostream>
#include <string>
#include <vector>

class A
{
public:
	std::string Name;
	std::vector<int> values;
};


int Function()
{
	return 10;
}

int main()
{

	{
		int Test = 20;
		Test = 30;

		// &를 LValue Ref라고 부른다
		// RValue
		// 명확하게 위치가 있고 

			
		// 대입할 수 있고 메모리 영역을 특정할 수 있는 메모리들을
		// LValue라고 한다

		// 사용하거나 참조할 수만 있는 메모리들을 RValue라고 한다
	}
}