#pragma once
#include "ConsoleGameMath.h"
#include "GameEngineArray.h"

// 이게 1단계
// 근본오브 근본 수학 물리 
class ConsoleGameScreen
{
public:
	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	//static int2 GetMainScreenSize()
	//{
	//	return MainScreen.GetScreenSize();
	//}

	int2 GetScreenSize();  // 나의 스크린 사이즈를 가져오는 함수

	void SetScreenSize(int2 _Size);

	void ScreenClear();

	void ScreenPrint() const;

	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:
	// char Arr[ScreenYSize][ScreenXSize] = { 0, };

	// char** ArrScreen = nullptr;

	// GameEngineArray<char> ArrPtr 를 여러개 만드는 애
	// GameEngineArray<char> => char 를 여러개 가질수 있는 녀석
	GameEngineArray<GameEngineArray<char>> ArrScreen;

	int2 Size;

	// 캐릭터의 배열을 가진 또다른 배열이라고 할수 있어요.


	ConsoleGameScreen();
	~ConsoleGameScreen();

	// 싱글톤 패턴이라고 한다
	// 싱글톤 패턴이란 => 클래스를 짤 때 이러이러한 구조가 정말 많이 사용된다
	// 생성자를 막고 객체를 static이나 전역으로 하나만 만든다
	// 그러면 프로그램 내의 이 클래스의 객체는 한개가 만들어진다
	static ConsoleGameScreen MainScreen;
};