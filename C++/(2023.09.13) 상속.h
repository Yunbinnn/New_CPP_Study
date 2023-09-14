#pragma once
#include <iostream>
#include "Camera.h"
using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ 
// ����� �� �ֵ��� �������ִ� ����Դϴ�.

class Vehicle
{
protected:
	float speed = 0;
	static int killCount;

public:
	Vehicle()
	{
		speed = 100;
		cout << "Vehicle ������Ʈ ����" << endl;
	}

	void Movement()
	{
		cout << "�̵�" << endl;
	}

	static int GetCount()
	{
		return killCount;
	}

	~Vehicle()
	{
		cout << "Vehicle ������Ʈ ����" << endl;
	}

};

int Vehicle::killCount = 0;

class Car : public Vehicle
{
private:
	int carID = 0;

public:
	Car()
	{
		carID = 1;
		speed = 200;
		cout << "Car ������Ʈ ����" << endl;
	}

	~Car()
	{
		cout << "Car ������Ʈ ����" << endl;
		cout << "killCount : " << ++killCount << endl;
	}
};

// Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������
// �Ӽ��� ����� �� ������, ���� Ŭ������ ���� Ŭ������
// �޸𸮸� ������ ���·� �޸��� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

int main()
{
#pragma region ���

	/*Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << "vehicle�� ũ�� : " << sizeof(vehicle) << endl;
	cout << "car�� ũ�� : " << sizeof(car1) << endl;*/

	cout << Vehicle::GetCount() << endl;

#pragma endregion

#pragma region Ŭ���� ���Ұ� ����

	/*Camera camera;

	camera.Information();*/

#pragma endregion

	return 0;
}
