#pragma once
#include "Mechanic.h"

class Siege_Tank : public Mechanic
{
public:
	Siege_Tank();

	void Attack() override;

	~Siege_Tank();
};

