#include "Keyboard.h"

Keyboard::Keyboard()
{
	cout << "키보드 생성" << endl;
}

void Keyboard::Input()
{
	cout << "키보드 입력" << endl;
}

void Keyboard::OnButton()
{
	cout << "키보드 버튼 눌림" << endl;
}

Keyboard::~Keyboard()
{
	cout << "키보드 삭제" << endl;
}