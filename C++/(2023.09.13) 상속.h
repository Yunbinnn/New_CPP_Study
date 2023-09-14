#pragma once
#include <iostream>
#include "Camera.h"
using namespace std;

#pragma region 상속
// 상위 클래스의 속성을 하위 클래스가 
// 사용할 수 있도록 설정해주는 기능입니다.

class Vehicle
{
protected:
	float speed = 0;
	static int killCount;

public:
	Vehicle()
	{
		speed = 100;
		cout << "Vehicle 오브젝트 생성" << endl;
	}

	void Movement()
	{
		cout << "이동" << endl;
	}

	static int GetCount()
	{
		return killCount;
	}

	~Vehicle()
	{
		cout << "Vehicle 오브젝트 해제" << endl;
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
		cout << "Car 오브젝트 생성" << endl;
	}

	~Car()
	{
		cout << "Car 오브젝트 해제" << endl;
		cout << "killCount : " << ++killCount << endl;
	}
};

// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
// 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.

#pragma endregion

int main()
{
#pragma region 상속

	/*Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << "vehicle의 크기 : " << sizeof(vehicle) << endl;
	cout << "car의 크기 : " << sizeof(car1) << endl;*/

	cout << Vehicle::GetCount() << endl;

#pragma endregion

#pragma region 클래스 분할과 구현

	/*Camera camera;

	camera.Information();*/

#pragma endregion

	return 0;
}
