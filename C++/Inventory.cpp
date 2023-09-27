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
			items[i].SetItem(100, "포션");
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

void Inventory::ShowItem()
{
	if (items[selectedIndex].GetCheck())
		items[selectedIndex].Information();
	else
		cout << "아이템이 존재하지 않습니다." << endl;
}

void Inventory::SelectNumber(InputKey inputKey)
{
	// inputKey.GetX() (0) / 2

	// [0] [1]
	int resultX = inputKey.GetX() / 2;

	// inputKey.GetY() (0) * 5
	int resultY = inputKey.GetY() * lineX;

	// resultX + resultY
	// [0 ] [1 ] [2 ] [3 ] [4 ]
	// [5 ] [6 ] [7 ] [8 ] [9 ]
	// [10] [11] [12] [13] [14]

	selectedIndex = resultX + resultY;
}