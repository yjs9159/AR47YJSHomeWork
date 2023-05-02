#pragma once
#include "ConsoleGameMath.h"


class ConsoleGameScreen
{
public:
	// 클래스 내부에 전역변수를 선언할 수 있다
	// static을 통해서 
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	static int2 GetScreenSize(); // 나의 스크린 사이즈를 가져오는 함수
	
	void ScreenClear();

	void ScreenPrint() const;
	// IsScreenOver()와 InPut()
	// ConsoleGameScreen.IsScreenOver
	// Player.Input
	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:			// 생성자를 private로 만듦으로써 여러개의 스크린을 만드는 것을 억제한다
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

	ConsoleGameScreen();

	// 싱글톤 패턴이라고 한다
	// 싱글톤 패턴이란 => 클래스를 짤 때 이러이러한 구조가 정말 많이 사용된다
	// 생성자를 막고 객체를 static이나 전역으로 하나만 만든다
	// 그러면 프로그램 내의 이 클래스의 객체는 한개가 만들어진다
	static ConsoleGameScreen MainScreen;

};