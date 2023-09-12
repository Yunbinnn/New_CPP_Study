#pragma once
#include <iostream>
using namespace std;

#pragma region Ŭ����
// ����� ���� ������ �������� �Ӽ��� �Լ��� 
// ���ԵǾ� ������, Ŭ������ ���� ��ü�� �����Ͽ� 
// �����ϰ� ����� �� �ִ� ����ü�Դϴ�.

class GameObject
{
	// ���� ������ 
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ���
	// ���� ������ �����ϴ� �������Դϴ�.

	// public
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����, �׸���
	// Ŭ���� �ܺο��� ������ ����ϴ� �������Դϴ�.

	// protected
	// Ŭ���� ���ο� �ڱⰡ ����ϰ��ִ� Ŭ���� ������,
	// ������ ����ϴ� �������Դϴ�.

	// private
	// Ŭ���� ���ο����� ������ ����ϴ� �������Դϴ�.

public:
	float x;

	void SendMessage()
	{
		cout << "�޽���" << endl;
	}
protected:
	float y;
private:
	double z;
};

#pragma endregion

#pragma region �����ڿ� �Ҹ���
// <������>
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� 
// �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

class Monster
{
public:
	Monster()
	{
		cout << "Monster ����" << endl;
	};

	// �������� ��� ��ü�� ������ �� �� �ѹ���
	// ȣ��Ǹ�, �����ڴ� ��ȯ���� �������� �ʱ� ������
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ����� �ʽ��ϴ�.

	// <�Ҹ���>
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.
	~Monster()
	{
		cout << "Monster �Ҹ�" << endl;
	}

	// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �ѹ��� ȣ��Ǹ�,
	// �Ҹ��ڿ��� �Ű������� �����Ͽ� ����� �� �����ϴ�.
};

#pragma endregion

int main()
{
#pragma region Ŭ����

	/*GameObject gameObject1;
	GameObject gameObject2;

	cout << sizeof(gameObject1) << endl;

	gameObject1.SendMessage();
	gameObject2.SendMessage();

	gameObject1.x = 100;*/

#pragma endregion														   

#pragma region �����ڿ� �Ҹ���

	Monster monster;

	// 8 byte
	// [    ]
	Monster* ptr = new Monster;

	delete ptr;

#pragma endregion

	return 0;
}