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
        cout << "지정할 수 있는 HP값의 범위를 벗어났습니다." << endl;
    else
        health = value;
}
