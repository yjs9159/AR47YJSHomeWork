#include <iostream>

class Player
{
public:

	// 멤버함수 뒤에도 const를 붙일 수 있다

	// 이 함수를 호출한다고 해도
	// 이 클래스를 통해서 만들어진 객체는 변화하지 않을거야
	void PrintStatus() const
	{
		// this;
		// 멤버함수 뒤에 const를 고치면 멤버변수를 고칠 수 없다
		// this->Att += 100;


	}
};
int main()
{

}