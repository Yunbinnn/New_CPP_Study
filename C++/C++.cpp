#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

char key = 0;
int randNum = 0;
int currentRound = 1;

void Input()
{
	{
		if (_kbhit()) // 키보드 입력을 확인하는 함수
		{
			key = _getch();

			if (key == -32)
				key = _getch();

			switch (key)
			{
			case UP: 
				break;
			case LEFT: 
				break;
			case RIGHT: 
				break;
			case DOWN: 
				break;
			}
		}
	}
}

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
	
	srand(time(NULL));
	vector<const char*> note;

	for (int i = 0; i < currentRound + 4; i++)
	{
		randNum = rand() % 4;

		switch (randNum)
		{
		case 0: note.push_back("↑");
			break;
		case 1: note.push_back("↓");
			break;
		case 2: note.push_back("←");
			break;
		case 3: note.push_back("→");
		}
	}

	for (int i = 0; i < note.size(); i++)
	{
		cout << note[i] << " ";
	}

#pragma endregion

	return 0;
}