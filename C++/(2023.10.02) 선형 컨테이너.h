#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

#pragma region 리듬 게임

#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

int randNum = 0;
int currentRound = 1;

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { static_cast<short>(x),static_cast<short>(y) };

	// 커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

#pragma endregion

#pragma region 선형 컨테이너
// 데이터를 선형으로 저장하며, 특별한 제약이나
// 규칙이 없는 일반적인 컨테이너입니다.

#pragma endregion

int main()
{
#pragma region Vector 컨테이너

	//vector<int> vector;

	//// push_back() : 뒤 쪽에 데이터를 저장하는 함수
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

#pragma region 리듬 게임

	//char key = 0;
	//int currentLife = 5;
	//srand(time(NULL));
	//vector<const char*> note;

	//for (int i = 0; i < currentRound + 4; i++)
	//{
	//	randNum = rand() % 4;

	//	switch (randNum)
	//	{
	//	case 0: note.push_back("↑");
	//		break;
	//	case 1: note.push_back("↓");
	//		break;
	//	case 2: note.push_back("←");
	//		break;
	//	case 3: note.push_back("→");
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
	//	case UP: if (note[note.size() - 1] == "↑") note.pop_back();
	//			 else currentLife--;
	//		     break;
	//	case LEFT: if (note[note.size() - 1] == "←") note.pop_back();
	//			   else currentLife--;
	//		       break;
	//	case RIGHT: if (note[note.size() - 1] == "→") note.pop_back();
	//			    else currentLife--;
	//			    break;
	//	case DOWN: if (note[note.size() - 1] == "↓") note.pop_back();
	//			   else currentLife--;
	//			   break;
	//	}

	//	if (currentLife < 0)
	//		return 0;

	//	system("cls");
	//}

#pragma endregion

#pragma region deque 컨테이너

	// Deque 선언
	/*deque<int> deque;

	deque.push_back(10);
	deque.push_back(20);
	deque.push_front(99);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << i << " 번째 값 : " << deque[i] << endl;
	}*/

#pragma endregion

	return 0;
}