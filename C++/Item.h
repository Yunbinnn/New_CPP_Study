#pragma once
#include "using_std.h"

class Item
{
private:
	const char* name;
	int price;
	bool check = false;

public:
	Item(int price = 0, const char* name = "");

	void SetItem(int price, const char* name);
	void Information();
	bool GetCheck();
	void SetCheck(bool _check);
};