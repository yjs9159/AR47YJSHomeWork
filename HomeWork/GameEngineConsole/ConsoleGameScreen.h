#pragma once
#include "ConsoleGameMath.h"
#include "GameEngineArray.h"

// �̰� 1�ܰ�
// �ٺ����� �ٺ� ���� ���� 
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

	int2 GetScreenSize();  // ���� ��ũ�� ����� �������� �Լ�

	void SetScreenSize(int2 _Size);

	void ScreenClear();

	void ScreenPrint() const;

	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:
	// char Arr[ScreenYSize][ScreenXSize] = { 0, };

	// char** ArrScreen = nullptr;

	// GameEngineArray<char> ArrPtr �� ������ ����� ��
	// GameEngineArray<char> => char �� ������ ������ �ִ� �༮
	GameEngineArray<GameEngineArray<char>> ArrScreen;

	int2 Size;

	// ĳ������ �迭�� ���� �Ǵٸ� �迭�̶�� �Ҽ� �־��.


	ConsoleGameScreen();
	~ConsoleGameScreen();

	// �̱��� �����̶�� �Ѵ�
	// �̱��� �����̶� => Ŭ������ © �� �̷��̷��� ������ ���� ���� ���ȴ�
	// �����ڸ� ���� ��ü�� static�̳� �������� �ϳ��� �����
	// �׷��� ���α׷� ���� �� Ŭ������ ��ü�� �Ѱ��� ���������
	static ConsoleGameScreen MainScreen;
};