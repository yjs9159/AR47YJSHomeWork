#pragma once

#include <windows.h>
#include <assert.h>

//void MsgBoxAssert(const char* _Text)
//{
//	MessageBoxA(nullptr, _Text, "Error", MB_OK);
//	assert(false);
//}

#define MsgBoxAssert(Text) MessageBoxA(nullptr, Text, "Error", MB_OK); assert(false);