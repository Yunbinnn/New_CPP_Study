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

	inven.Renderer();

	while (1)
	{
		input.Move();
	}


	return 0;
}