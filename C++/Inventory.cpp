#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	lineX = x;
	selectedIndex = 0;

	size = x * y;
	items = new Item[size];

	for (int i = 0; i < size; i++)
	{
		items[i].SetCheck(false);
	}
}

void Inventory::Renderer()
{
	for (int i = 0; i < size; i++)
	{	 
		if (i % 5 == 0 && i != 0)
			cout << endl;

		if (!items[i].GetCheck())
			cout << "□";
		else
			cout << "■";
	}
}

void Inventory::AddItem()
{
	for (int i = 0; i < size; i++)
	{
		if (!items[i].GetCheck())
		{
			items[i].SetCheck(true);
			break;
		}

		if (i == size - 1)
		{
			if (items[size - 1].GetCheck())
				cout << "인벤토리가 가득 찼습니다." << endl;
		}
	}
}

void Inventory::SelectNumber()
{
	if (input.GetX() > 0 && input.GetX() < 8)
	{
		lineX = input.GetX();
	}

	if (input.GetY() > 0)
	{
		lineX += 5;
	}
}