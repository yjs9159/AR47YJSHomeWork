#include "ShootingGame.h"
#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"
#include "bullet.h"

void ShootingGame::GameProgress()
{
	// �Ѿ� 1���� �߻��ϱ�
	// �Ѿ� Ŭ������ �����
	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();

	NewBullet.SetPlayer(&NewPlayer);

	// int2 NewPos = int2{ 5,5 };
	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());


	// Bullet* NewBullet;
	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear(); // ȭ���� ����ϰ� �����

		// ������ �����ӿ�ũ�� �����ϴ�
		// �������� ���ο��� ��ü���� Ȱ���ϴ� ��

		NewPlayer.Render();
		NewBullet.Render();			// �ҷ��� �÷��̾ ��� �ൿ�� ���� �� �����ϱ� ������ �÷��̾��� �ڿ� ���´�

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		NewBullet.Update();

	}
}
