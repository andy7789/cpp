#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Circle {
public:
	void draw(int x, int y, int a, int b) {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x, y, a, b);
	}
};

int main()
{
	Circle c1, c2;
	c1.draw(300, 300, 100, 100);
	c2.draw(300, 300, 500, 500);
	return 0;
	system("pause");
}