#include "Ghost.h"

Ghost::Ghost()
{
    health = 45;
    maxHP = health;
}

int Ghost::GetHP()
{
    return health;
}

void Ghost::Skill()
{
}

void Ghost::RecoveryHP()
{
    health = maxHP;
}

void Ghost::SetHP(int value)
{
    if (value < 0 || value > maxHP)
        cout << "지정할 수 있는 HP값의 범위를 벗어났습니다." << endl;
    else
        health = value;
}
