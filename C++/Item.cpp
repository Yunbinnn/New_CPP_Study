#include "Item.h"

Item::Item(int price, const char* name)
{
	this->price = price;
	this->name = name;
}

bool Item::GetCheck()
{
	return check;
}

void Item::SetCheck(bool _check)
{
	this->check = _check;
}