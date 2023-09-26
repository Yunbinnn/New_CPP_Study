#pragma once
#include "Item.h"
#include "InputKey.h"

class Inventory
{
private:
	int size = 0;
	int lineX;
	int selectedIndex;
	Item* items;
	InputKey input;

public:
	Inventory(int x = 5, int y = 3);
	void Renderer();
	void AddItem();
	void SelectNumber();
};