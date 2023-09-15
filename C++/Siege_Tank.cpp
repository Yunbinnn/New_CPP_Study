#include "Siege_Tank.h"

Siege_Tank::Siege_Tank()
{
	health = 150;
	attack = 30;

	cout << "½ÃÁîÅÊÅ© »ı¼º" << endl;
}

void Siege_Tank::Attack()
{
	cout << "½ÃÁîÅÊÅ© °ø°İ" << endl;
}

Siege_Tank::~Siege_Tank()
{
	cout << "½ÃÁîÅÊÅ© ¼Ò¸ê" << endl;
}
