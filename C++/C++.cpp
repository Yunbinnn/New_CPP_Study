﻿#include <iostream>
#include "Marine.h"
using namespace std;

#pragma region 함수의 오버로딩
// 같은 이름의 함수를 매개변수의 자료형과 매개변수의
// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

void Calculator(char x, char y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(int x, int y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(float x, float y)
{
	cout << "x + y : " << x + y << endl;
}

// 함수의 오버로딩의 경우 함수의 매개변수에
// 전달하는 인수의 형태를 보고 호출하므로, 반환형으로
// 함수의 오버로딩은 생성할 수 없습니다.
//int Calculator(float x, float y)
//{
//
//
//}

#pragma endregion

void Recovery();

int main()
{
#pragma region 함수의 오버로딩

	/*Calculator('A', 'B');
	Calculator(10, 20);
	Calculator(5.75f, 6.25f);*/

#pragma endregion

#pragma region 순수 가상함수
	// 함수를 선언만 할 수 있으며, 해당 클래스에서 구현을 할 수 없고,
	// 상속받은 하위 클래스에서 반드시 재정의를 해야하는 멤버 함수입니다.
	int value;
	cin >> value;

	Unit* unitPtr = new Marine;

	unitPtr->SetHP(value);
	unitPtr->Skill();

	cout << "HP : " << unitPtr->GetHP() << endl;
#pragma endregion

	return 0;
}

void Recovery(Unit* unit)
{		
	if (unit->GetHP() < 100)
		unit->SetHP(100);
}