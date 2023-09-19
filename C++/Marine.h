#pragma once
#include "Unit.h"

class Marine : public Unit
{
public:
	Marine();

	int GetHP() override;
	void Skill() override;
	void RecoveryHP() override;
	void SetHP(int value) override;
};