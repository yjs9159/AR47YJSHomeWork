#include <iostream>


void Function()
{
	printf_s("void Function()");
}
// Functionint
void Function(int _Value)
{
	printf_s("void Function(int _Value)");
}

void Function(int _Value, int Test)
{
	printf_s("void Function(int _Value, int Test)");
}


int main()
{
	Function();
	Function(10);
}
