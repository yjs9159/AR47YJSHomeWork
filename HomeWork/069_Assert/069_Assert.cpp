#include <iostream>
#include <assert.h>
#include <windows.h>

void MsgBoxAssert(const char* _Text)
{
	MessageBoxA(nullptr, "네용", "제목", MB_OK /*확인버튼*/);
	assert(false);
}



int main()
{
	MsgBoxAssert("asda");
}