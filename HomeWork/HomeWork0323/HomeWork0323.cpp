#include <iostream>

class Number
{
private:
	int Value;

public:
	// 맴버 이니셜라이저.
	Number(int _Value)
		: Value(_Value)
	{

	}

	// +연산자
	int operator+(int _Value)
	{
		return Value + _Value;
	}
	
	// -연산자
	int operator-(int _Value)
	{
		return Value - _Value;
	}
	
	// *연산자
	int operator*(int _Value)
	{
		return Value * _Value;
	}

	// /연산자
	int operator/(int _Value)
	{
		return Value / _Value;
	}

	// %연산자
	int operator%(int _Value)
	{
		return Value % _Value;
	}

	// =연산자
	int operator=(int _Value)
	{
		return Value = _Value;
	}

	// +=연산자
	int operator+=(int _Value)
	{
		return Value += _Value;
	}

	// -=연산자
	int operator-=(int _Value)
	{
		return Value -= _Value;
	}

	// ++연산자
	int operator++()
	{
		return ++Value;
	}

	// --연산자
	int operator--()
	{
		return Value--;
	}

	// ==연산자
	int operator==(int _Value)
	{
		return Value == _Value;
	}


	// !=연산자
	int operator!=(int _Value)
	{
		return Value != _Value;
	}

	// >연산자
	int operator>(int _Value)
	{
		return Value > _Value;
	}

	// >=연산자
	int operator>=(int _Value)
	{
		return Value >= _Value;
	}

	// <연산자
	int operator<(int _Value)
	{
		return Value < _Value;
	}

	// <=연산자
	int operator<=(int _Value)
	{
		return Value <= _Value;
	}

	// &&연산자
	bool operator&&(int _Value)
	{
		return Value && _Value;
	}

	// ||연산자
	bool operator||(int _Value)
	{
		return Value || _Value;
	}

	// !연산자
	bool operator!()
	{
		return ! Value;
	}

	// &연산자
	int operator&(int _Value)
	{
		return Value & _Value;
	}

	//	|연산자
	int operator|(int _Value)
	{
		return Value | _Value;
	}

	// ^연산자
	int operator^(int _Value)
	{
		return Value ^ _Value;
	}

	// <<연산자
	int operator<<(int _Value)
	{
		return Value << _Value;
	}

	// >>연산자
	int operator>>(int _Value)
	{
		return Value >> _Value;
	}



};


int main()
{
	Number NewNumber = 10;

	NewNumber.operator+(10);
	NewNumber.operator-(10);
	NewNumber.operator*(10);
	NewNumber.operator/(10);
	NewNumber.operator%(10);

	NewNumber.operator=(10);
	NewNumber.operator+=(10);
	NewNumber.operator-=(10);
	NewNumber.operator++();
	NewNumber.operator--();
	NewNumber.operator==(10);
	NewNumber.operator!=(10);
	NewNumber.operator>(10);
	NewNumber.operator>=(10);
	NewNumber.operator<(10);
	NewNumber.operator<=(10);

	NewNumber.operator&&(10);
	NewNumber.operator||(10);
	NewNumber.operator!();
	NewNumber.operator&(10);
	NewNumber.operator^(10);
	NewNumber.operator|(10);
	NewNumber.operator<<(10);
	NewNumber.operator>>(10);












}