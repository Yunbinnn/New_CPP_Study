#include "Item.h"

Item::Item(int price, const char* name)
{
	this->price = price;
	this->name = name;
}

void Item::SetItem(int price, const char* name)
{
	this->price = price;
	this->name = name;
}

void Item::Information()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << price << endl;
}

bool Item::GetCheck() 
{
	return check;
}

void Item::SetCheck(bool _check)
{
	this->check = _check;
}