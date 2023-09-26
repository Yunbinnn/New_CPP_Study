#pragma once
#include "using_std.h"
#include <Windows.h>
#include <conio.h>

#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

class InputKey
{ 
private:
	int x, y;
	char key;

public:
	InputKey();
	const int GetX();
	const int GetY();
	void Move();
	void GotoXY(int x, int y);
};