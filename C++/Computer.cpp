#include "Computer.h"

Computer::Computer()
{
	cout << "��ǻ�� ����" << endl;
}

void Computer::Use()
{
	// ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ� �Ӽ���
	// ������ �� �ֱ� ������ ���� ���� �����ڸ� ���� ���� Ŭ������
	// �̸��� �����ϰ� �Ӽ��� ����ؾ� �մϴ�.
	Mouse::Input();
	Keyboard::Input();

	OnDrag();
	OnButton();
}

Computer::~Computer()
{
	cout << "��ǻ�� ����" << endl;
}
