#pragma once
#include <Windows.h>
#include <assert.h>

// ���� : 
//class GameEngineDebug
//{
//public:
//	// constructer destructer
//	GameEngineDebug();
//	~GameEngineDebug();
//
//	// delete Function
//	GameEngineDebug(const GameEngineDebug& _Other) = delete;
//	GameEngineDebug(GameEngineDebug&& _Other) noexcept = delete;
//	GameEngineDebug& operator=(const GameEngineDebug& _Other) = delete;
//	GameEngineDebug& operator=(GameEngineDebug&& _other) noexcept = delete;
//
//protected:
//
//private:
//	 
//};


//#include <windows.h>
//#include <assert.h>


#define MsgBoxAssert(Text) MessageBoxA(nullptr, Text, "Error", MB_OK); assert(false);