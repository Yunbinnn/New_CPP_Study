#include "Mouse.h"

Mouse::Mouse()
{
	cout << "마우스 생성" << endl;
}

void Mouse::Input()
{
	cout << "마우스 입력" << endl;
}

void Mouse::OnDrag()
{
	cout << "마우스 드래그" << endl;
}

Mouse::~Mouse()
{
	cout << "마우스 삭제" << endl;
}