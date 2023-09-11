#pragma once
#include <iostream>
using namespace std;

int data = 25;

namespace A
{
	void Attack()
	{
		cout << "A ������ Attack()" << endl;
	}
}

namespace B
{
	void Attack()
	{
		cout << "B ������ Attack()" << endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp�� �� : " << hp << endl;
}

// �⺻ �Ű������� �����ʿ��� ���� �����ؾ� �մϴ�.
void Move(int x, int y, int z = 10)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;

}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴ� ��
	// ����ϴ� �������Դϴ�.

	/*int data = 100;

	std::cout << "���� ���� data�� �� : " << data << std::endl;
	std::cout << "���� ���� data�� �� : " << ::data << std::endl;*/

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	// ����Ǿ��� �� ���� ����� ������ ���� ������ �̸���
	// ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.

#pragma endregion

#pragma region ���ӽ����̽�(namespace)
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	/*int a = 5, b = 3;

	A::Attack();
	B::Attack();*/

#pragma endregion	

#pragma region �⺻ �Ű�����
	// �Լ��� �Ű� ������ ���� ���޵��� �ʾ��� ��
	// �⺻ ������ �����Ǵ� �Ű� �����Դϴ�.

	/*
	int hp = 100;

	Damage();

	// �⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ���
	// �־��� �� �ֽ��ϴ�.
	Move(5,10);

	Move(10, 15, 25);
	*/

#pragma endregion

#pragma region �ּ� �����

	int x, y;

	int gcd = 0, lcm = 0;

	cin >> x >> y;

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
			gcd = i;
	}

	lcm = (x * y) / gcd;

	cout << "x�� y�� �ּ� ����� : " << lcm << endl;

#pragma endregion

	return 0;
}