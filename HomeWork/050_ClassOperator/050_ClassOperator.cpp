#include <iostream>

class Number
{
private:
	int Value;

public:
	// 멤버 이니셜라이저
	Number(int _Value)
		:Value(_Value)
	{

	}

};


int main()
{
	int Value = 10;
	Value + 10;

	Number Value = 10;
	Value + 10;


}