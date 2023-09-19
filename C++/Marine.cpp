#include "Marine.h"

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "½ºÆÀÆÑ" << endl;
}

void Marine::RecoveryHP()
{
	health = maxHP;
}

void Marine::SetHP(int value)
{
	if (value < 0 || value > maxHP)
		cout << "ÁöÁ¤ÇÒ ¼ö ÀÖ´Â HP°ªÀÇ ¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù." << endl;
	else
		health = value;
}