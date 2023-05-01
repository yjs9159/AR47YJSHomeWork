#include <iostream>

int main(int _Count, const char** _InitText)
{
	// 내 프로세스가 다른 프로세스를 실행할 수도 있다
	// system("078_BitTest.exe");

	for (size_t i = 0; i < _Count; i++)
	{
		// char*
		std::cout << _InitText[i] << std::endl;
	}
	// 이 프로그램이 실행되는 경로를 출력한다

	return 1;

}
