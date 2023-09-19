#include "Firebat.h"

Firebat::Firebat()
{
    health = 50;
    maxHP = health;
}

int Firebat::GetHP()
{
    return health;
}

void Firebat::Skill()
{
}

void Firebat::RecoveryHP()
{
    health = maxHP;
}

void Firebat::SetHP(int value)
{
    if (value < 0 || value > maxHP)
        cout << "������ �� �ִ� HP���� ������ ������ϴ�." << endl;
    else
        health = value;
}
