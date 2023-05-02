#pragma once
#include "ConsoleGameMath.h"


class ConsoleGameScreen
{
public:
	// Ŭ���� ���ο� ���������� ������ �� �ִ�
	// static�� ���ؼ� 
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	static int2 GetScreenSize(); // ���� ��ũ�� ����� �������� �Լ�
	
	void ScreenClear();

	void ScreenPrint() const;
	// IsScreenOver()�� InPut()
	// ConsoleGameScreen.IsScreenOver
	// Player.Input
	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:			// �����ڸ� private�� �������ν� �������� ��ũ���� ����� ���� �����Ѵ�
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

	ConsoleGameScreen();

	// �̱��� �����̶�� �Ѵ�
	// �̱��� �����̶� => Ŭ������ © �� �̷��̷��� ������ ���� ���� ���ȴ�
	// �����ڸ� ���� ��ü�� static�̳� �������� �ϳ��� �����
	// �׷��� ���α׷� ���� �� Ŭ������ ��ü�� �Ѱ��� ���������
	static ConsoleGameScreen MainScreen;

};