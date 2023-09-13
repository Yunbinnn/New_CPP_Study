#pragma once
#include <iostream>
using namespace std;

#pragma region ���� ������
// ���� ��ü�� �����Ͽ� ������ų ��
// ȣ��Ǵ� �������Դϴ�.

class Item
{
private:
	int price = 0;
	int* size;

public:
	Item()
	{
		price = 100;
		size = new int;
		*size = 999;
	}

	Item(const Item& _item)
	{
		price = _item.price;
		size = new int;
		*size = 450;
	}

	void Show()
	{
		cout << "price : " << price << endl;
		cout << "*size : " << *size << endl;
	}

	~Item()
	{
		delete size;
	}
};

#pragma endregion

int main()
{
#pragma region ���� ������

	Item item;
	item.Show();

	Item _item = item;
	_item.Show();

#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ �� �ּ� ���� �����Ͽ�
	// ���� �޸𸮸� ����Ű�� �����Դϴ�.

	/*int* ptr1 = new int;
	int* ptr2 = ptr1;

	*ptr2 = 1000;

	cout << "ptr1�� �� : " << ptr1 << endl;
	cout << "ptr2�� �� : " << ptr2 << endl;

	delete ptr1;*/
	// delete ptr2; ERROR

	// ���� ����� ��ü�� �޸𸮿��� ������ �� ��������
	// ���� ������ �ݴ�� �Ҹ��ڰ� ����Ǳ� ������
	// ������ ��ü�� ���� �����ǹǷ� ���� �ִ� ��ü��
	// ������ ���� �̹� ������ �޸𸮿� �����ϰ� �˴ϴ�.

#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü��
	// ���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� �����Դϴ�.



#pragma endregion

	return 0;
}