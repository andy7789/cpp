﻿#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int w, int h);
	int calcArea();
};
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

int Rectangle::calcArea()
{
	return width * height;
}
int main()
{
	Rectangle r{ 5,7 };

	cout << "사각형의 넓이: " << r.calcArea() << endl;
	return 0;
}
