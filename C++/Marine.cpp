#include "Marine.h"

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	const unsigned int minHP = 0;
	const unsigned int maxHP = 100;

	if (value < minHP || value > maxHP)
		cout << "������ �� �ִ� HP���� ������ ������ϴ�." << endl;
	else
		health = value;
}