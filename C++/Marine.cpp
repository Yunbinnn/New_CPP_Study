#include "Marine.h"

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "½ºÆÀÆÑ" << endl;
}

void Marine::SetHP(int value)
{
	const unsigned int minHP = 0;
	const unsigned int maxHP = 100;

	if (value < minHP || value > maxHP)
		cout << "ÁöÁ¤ÇÒ ¼ö ÀÖ´Â HP°ªÀÇ ¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù." << endl;
	else
		health = value;
}