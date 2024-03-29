﻿#include <iostream>
#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleGameObject.h>
#include "Player.h"
#include "Bomb.h"
#include "ConsoleObjectManager.h"
#include "GameEnum.h"
#include <conio.h>

int main()
{
	GameEngineDebug::LeckCheck();

	int2 ScreenSize = { 20, 10 };
	ConsoleGameScreen::GetMainScreen().SetScreenSize(ScreenSize);


	// 이 코드를 업캐스팅으로 사용한 이유
	// 인터페이스 통일
	// 이 프레임 워크 상의 모든 존재들은 update와 render라는 인터페이스를 따른다
	// ConsoleGameObject* NewPlayer = new Player();

	// 0번 그룹에 속한다
	// CreateConsoleObject<Bomb>(ObjectOrder::Bomb);
	// 1번 그룹속한다.
	ConsoleObjectManager::CreateConsoleObject<Player>(ObjectOrder::Player);

	// CreateConsoleObject<Monster>(2);


	while (Player::IsGameUpdate)  // 화면을 깔끔하게 지운다
	{
		ConsoleObjectManager::ConsoleAllObjectUpdate();
		ConsoleObjectManager::ConsoleAllObjectRender();
		ConsoleObjectManager::ConsoleAllObjectRelease();
		Sleep(200);
	}

	ConsoleObjectManager::ConsoleAllObjectDelete();
}