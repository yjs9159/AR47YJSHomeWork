#include <iostream>

class Number
{
private:
	int Value;
public:
	Number(int _Value)
		: Value(_Value) // 멤버이니셜라이저
	{
		// Value = _Value;
	}

	// 클래스가 연산자를 사용할 수 있게 만들어주는 것
	int operator+(int _Value)
	{
		return Value + _Value;
	}

	bool operator==(int _Value)
	{
		return Value == _Value;
	}
};


int main()
{
	{
		int Value = 10;
		Value + 10;
	}

	{
		// 자신이 논리적으로 이 연산자를 이렇게 만들면 되겠다 할 수 있는 
		Number Value = 10;
		Value + 10;
		{
			if (Value == 10)
			{
				
			}
		}
	}
}