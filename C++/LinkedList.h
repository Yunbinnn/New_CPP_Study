#pragma once
#include <iostream>
using namespace std;

template<typename T>
class LinkedList
{
private:
	T data;

public:
	LinkedList() = default;

	void Push( T data )
	{
		this->data = data;
		cout << "push가 되어진 data의 값 : " << this->data << endl;
	}
};