#pragma once
#include "Bank.h"
#include "Player.h"

int main()
{
#pragma region ���� ���
	// �ϳ��� ���� Ŭ������ �������� ���� Ŭ������ ��� �޴� ���Դϴ�.

	/*Computer computer;
	computer.Use();*/

#pragma endregion

#pragma region Friend
	// Friend�� ����� Ŭ������ private �� protected �����
	// ������ �� �ֵ��� �������ִ� ����Դϴ�.

	Player player;
	player.ShowMoney();

	Bank bank;
	bank.Wihtdrawal(player, 2000);

	player.ShowMoney();
	bank.ShowMoney();

#pragma endregion

	return 0;
}