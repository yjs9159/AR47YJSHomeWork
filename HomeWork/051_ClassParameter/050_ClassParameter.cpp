#include <iostream>

class Player
{
	int Value0;
	int Value1;
	int Value2;
	int Value3;
	int Value4;
	int Value5;
	int Value6;
	int Value7;

};

// Player가 1마리도 없을 가능성이 있다면 포인터로 만든다(인자)
//					=
// 게임의 구조에 따라 플레이어가 다 죽어서 사라지는 상황이 나온다면
void StatusRenderPtr(const Player* _Player)  // 플레이어의 능력치가 이 함수를 통과할 때 마다 변경이 되면 안되므로 const를 붙인다
// Player를 넣어주면 Status를 보여주는 함수
// 인자를 값형으로 하면 Player 클래스의 경우 32바이트이니까 실행효율이 많이 떨어진다
// 최적화를 이런곳에서 해야한다 (&나 *로 인자를 넣어줘야한다)
{
	// 인자를 포인터로 썼다면 무조건 null 체크해서 return 시키기
	// 방어코드
	if (nullptr == _Player)
	{
		return;
	}


}

// Player가 무조건 들어갈 경우 레퍼런스로 만든다
// 이유 => 방어코드를 안쳐도 되기 떄문
void StatusRenderRef(const Player& _Player)
{

}

int ReturnFunction()
{
	return 10;
}

int& ReturnFunctionRef()
{
	int Value = 20;
	return Value;
}

int main()
{
	ReturnFunctionRef() = 20;

	// 접근해서 수정할 수 없다
	// ReturnFunction() = 20;
	int Value = ReturnFunction();
	if (Value)
	{

	}

}