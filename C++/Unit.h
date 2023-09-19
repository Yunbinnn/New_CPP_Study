#pragma once
#include<iostream>
using namespace std;

class Unit
{
protected:
	int maxHP = 100;
	int health = maxHP;
	int defense = 10;

public:
	virtual void Skill() = 0;
	virtual int GetHP() = 0;
	virtual void RecoveryHP() = 0;
	virtual void SetHP(int value) = 0;
};

