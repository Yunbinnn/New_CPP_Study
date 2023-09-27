#pragma once
#include <iostream>
#include "Inventory.h"
#include "InputKey.h"
using namespace std;

int main()
{
	Inventory inven;
	InputKey input;

	for (int i = 0; i < 3; i++)
	{
		inven.AddItem();
	}

	while (1)
	{
		inven.Renderer();

		input.Move();
		inven.SelectNumber(input);

		input.GotoXY(0, 4);
		inven.ShowItem();

		Sleep(100);
		system("cls");
	}

	return 0;
}