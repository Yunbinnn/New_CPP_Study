#pragma once
#include <iostream>
using namespace std;

#pragma region final
// ���� Ŭ�������� �� �̻� �������� �� ������
// �����ϴ� ����Դϴ�.

class Hero
{
public:
	virtual void BasicSkill() { ; }
	virtual void MagicSkill() { ; }
};

class Crusaders : public Hero
{
	void BasicSkill() { ; }
	void MagicSkill() final { ; }
};

class Fighter : public Crusaders
{
	void BasicSkill() { ; }
	// void MagicSkill() { ; } ERROR
};

#pragma endregion

int main()
{

	return 0;
}