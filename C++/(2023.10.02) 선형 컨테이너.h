#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

#pragma region ���� ����

#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

int randNum = 0;
int currentRound = 1;

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { static_cast<short>(x),static_cast<short>(y) };

	// Ŀ�� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

#pragma endregion

#pragma region ���� �����̳�
// �����͸� �������� �����ϸ�, Ư���� �����̳�
// ��Ģ�� ���� �Ϲ����� �����̳��Դϴ�.

#pragma endregion

int main()
{
#pragma region Vector �����̳�

	//vector<int> vector;

	//// push_back() : �� �ʿ� �����͸� �����ϴ� �Լ�
	////   0	  1	   2
	//// [10]	[20] [30]
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back(40);
	//vector.push_back(50);

	////   0	  1	   2	3
	//// [10]	[20] [30] [40]
	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

#pragma endregion

#pragma region ���� ����

	//char key = 0;
	//int currentLife = 5;
	//srand(time(NULL));
	//vector<const char*> note;

	//for (int i = 0; i < currentRound + 4; i++)
	//{
	//	randNum = rand() % 4;

	//	switch (randNum)
	//	{
	//	case 0: note.push_back("��");
	//		break;
	//	case 1: note.push_back("��");
	//		break;
	//	case 2: note.push_back("��");
	//		break;
	//	case 3: note.push_back("��");
	//	}
	//}

	//while (!note.empty())
	//{
	//	for (int i = 0; i < note.size(); i++)
	//	{
	//		cout << note[i] << " ";
	//	}

	//	key = _getch();

	//	if (key == -32)
	//		key = _getch();

	//	switch (key)
	//	{
	//	case UP: if (note[note.size() - 1] == "��") note.pop_back();
	//			 else currentLife--;
	//		     break;
	//	case LEFT: if (note[note.size() - 1] == "��") note.pop_back();
	//			   else currentLife--;
	//		       break;
	//	case RIGHT: if (note[note.size() - 1] == "��") note.pop_back();
	//			    else currentLife--;
	//			    break;
	//	case DOWN: if (note[note.size() - 1] == "��") note.pop_back();
	//			   else currentLife--;
	//			   break;
	//	}

	//	if (currentLife < 0)
	//		return 0;

	//	system("cls");
	//}

#pragma endregion

#pragma region deque �����̳�

	// Deque ����
	/*deque<int> deque;

	deque.push_back(10);
	deque.push_back(20);
	deque.push_front(99);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << i << " ��° �� : " << deque[i] << endl;
	}*/

#pragma endregion

	return 0;
}