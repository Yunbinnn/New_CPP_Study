#pragma once
#include "Unit.h"
class Ghost : public Unit
{
public:
	int GetHP() override;
	void Skill() override;
	void SetHP(int value) override;
};