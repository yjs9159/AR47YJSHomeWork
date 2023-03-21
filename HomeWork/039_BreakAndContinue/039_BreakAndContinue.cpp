#include <iostream>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (i >= 50)
		{
			// switch문의 브레이크와는 다르다
			// 반복문에서의 break는 가장 가까운 반복문을 탈출한다
			break;
		}
		printf_s("%d\n", i);
	}
}