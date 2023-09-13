#include "Camera.h"

Camera::Camera()
{
	viewDistance = 60;
	cout << "Camera 생성" << endl;
}

Camera::~Camera()
{
	cout << "Camera 삭제" << endl;
}

void Camera::Information() const
{
	cout << "viewDistance : " << viewDistance << endl;
}