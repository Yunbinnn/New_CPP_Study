#include "InputKey.h"

InputKey::InputKey()
{
	x = 0;
	y = 0;
	key = 0;
}

const int InputKey::GetX()
{
	return x;
}

const int InputKey::GetY()
{
	return y;
}

void InputKey::Move()
{
	GotoXY(x, y);

	if (_kbhit()) // Ű���� �Է��� Ȯ���ϴ� �Լ�
	{
		key = _getch();

		if (key == -32)
			key = _getch();

		switch (key)
		{
		case UP: if (y > 0) y--;
			break;
		case LEFT: if (x > 0) x -= 2;
			break;
		case RIGHT: if (x < 8) x += 2;
			break;
		case DOWN: if (y < 2) y++;
			break;
		}
	}
}

void InputKey::GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { static_cast<short>(x),static_cast<short>(y) };

	// Ŀ�� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}