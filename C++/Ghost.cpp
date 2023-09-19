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
        cout << "������ �� �ִ� HP���� ������ ������ϴ�." << endl;
    else
        health = value;
}
