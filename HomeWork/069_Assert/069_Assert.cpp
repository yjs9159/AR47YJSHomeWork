// 
#include <iostream>
//#include <windows.h>
//#include <assert.h>
#include "Player.h"

//void MsgBoxAssert(const char* _Text)
//{
//	MessageBoxA(nullptr, _Text, "Error", MB_OK);
//	assert(false);
//}



int main()
{
	Player NewPlayer{};

	NewPlayer.Damage(0);

	//assert(false); // assert에 false를 넣으면 터진다
	// 일부러 터뜨리는 것

	// MessageBoxA(nullptr, "aaaa", "오류입니다", MB_OK); // 인자들을 그냥 외워야한다
	//MessageBoxA(nullptr, "내용", "제목", MB_OK // 확인버튼);

	// MsgBoxAssert("뭔가 잘못됨.");

}