#pragma once
#include <iostream>
using namespace std;

class Camera
{
private:
	float viewDistance;

public:
	Camera();
	~Camera();

	void Information() const;
};