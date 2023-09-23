#include "Bank.h"

int Bank::GetMoney(Player& player) const
{
	return player.money;
}

int Bank::SetMoney(Player& player)
{
	return player.money;
}

void Bank::Wihtdrawal(Player& player, int money)
{
	bankMoney += money;
	player.money -= money;
}

void Bank::ShowMoney()
{
	cout << "Bank Money : " << bankMoney << endl;
}