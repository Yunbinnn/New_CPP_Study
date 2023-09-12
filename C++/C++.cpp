#include <iostream>
using namespace std;

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때
	// 호출되는 생성자입니다.
	
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
#pragma region 복사 생성자

	Item item;
	item.Show();

	Item _item = item;
	_item.Show();

#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여
	// 같은 메모리를 가리키는 복사입니다.

	/*int* ptr1 = new int;
	int* ptr2 = ptr1;

	*ptr2 = 1000;

	cout << "ptr1의 값 : " << ptr1 << endl;
	cout << "ptr2의 값 : " << ptr2 << endl;

	delete ptr1;*/
	// delete ptr2; ERROR

	// 얕은 복사는 객체가 메모리에서 해제될 때 생성자의
	// 실행 순서와 반대로 소멸자가 실행되기 때문에
	// 복사한 객체가 먼저 해제되므로 원래 있던 객체가
	// 해제될 때는 이미 해제된 메모리에 접근하게 됩니다.

#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를
	// 새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.
	


#pragma endregion

	return 0;
}
