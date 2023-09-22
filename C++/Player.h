#pragma once
#include "using_std.h"

class Player
{
private:
	int money = 30000;
	friend class Bank;
public:
	void ShowMoney();
};