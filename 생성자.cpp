#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	string color;
	int price;

	//»ý¼ºÀÚ
	Car(){}
	Car(string c, int p) : color{ c }, price{ p }{}
	void print() {
		cout << color << ", " << price << endl;
	}
};

int main()
{
	Car car1{ "red", 1000 };
	car1.print();
	return 0;
}