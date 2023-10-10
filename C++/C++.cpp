﻿#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
#pragma region 맵(std::map)

	//map<string, int> mapData;

	//mapData.insert(make_pair("Sword", 5000));
	//mapData.insert(make_pair("Armor", 2500));

	// mapData.find("Sword")
	// [("Sword", 5000)] [("Armor", 2500)]

	//map<string, int>::iterator mapIter;

	//for (mapIter = mapData.begin(); mapIter != mapData.end(); mapIter++)
	//{
	//	cout << "Key : " << mapIter->first << endl;
	//	cout << "Value : " << mapIter->second << endl;
	//}
	//
	//if (mapData.find("Sword") != mapData.end())
	//	cout << "데이터가 존재합니다." << endl;
	//else
	//	cout << "Not Key Found" << endl;

#pragma endregion

#pragma region 셋(std::set)

	set<int> setData;

	// 중복된 값이 들어갔을 때
	// 중복된 값을 제거하고 다시 저장합니다.
	setData.insert(10);
 // setData.insert(10);	<- 제거
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);

	set<int>::iterator setIter;

	setIter = setData.begin();

	setData.erase(setIter);

#pragma endregion

	return 0;
}