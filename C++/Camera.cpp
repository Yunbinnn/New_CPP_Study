#include "Camera.h"

Camera::Camera()
{
	viewDistance = 60;
	cout << "Camera ����" << endl;
}

Camera::~Camera()
{
	cout << "Camera ����" << endl;
}

void Camera::Information() const
{
	cout << "viewDistance : " << viewDistance << endl;
}