#pragma once
#include "Player.h"

#pragma region Ŭ������ ���� ����
// ���ʿ��� ��� ������ �����ϰ� ���ԵǴ� ���� �����Ͽ�,
// ��������δ� ������ �ӵ��� ����ŵ�ϴ�.

// class Player;
#pragma endregion

class Bank
{
private:
	int bankMoney = 0;
public:
	int GetMoney(Player& player) const;
	int SetMoney(Player& player);
	void Wihtdrawal(Player& player, int money);
	void ShowMoney();
};