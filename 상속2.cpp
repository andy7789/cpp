#include "pch.h"
#include <iostream>
#include <string>
#include "HOUSE.h"

using namespace std;

class MyHouse : public House {
public:
	int size; //���� ������

	void fish() {
		cout << "����⸦ Ű���" << endl;
	}
};

class YourHouse : public House {
public:
	int win = 4;
};

int main()
{
	MyHouse m1;
	m1.color = "red";
	m1.door = 2;
	m1.size = 10;
	m1.tv();
	m1.sleep();
	m1.fish();
	m1.print();

	YourHouse y1;
	y1.color = "blue";
	y1.door = 4;
	y1.tv();
	y1.sleep();
	y1.win = 4;

	return 0;
}
