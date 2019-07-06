#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man {
public:
	string name;
	Man(){}
	Man(string n) : name{ n } {}
};

class SuperMan : public Man {
public:
	bool fly;
	SuperMan() {}
	SuperMan(bool f, string n) : Man(name) {
		fly = f;
	}
	void print() {
		cout << name << ", " << fly << endl;
	}
};

int main()
{
	SuperMan sMan1{ true, "클라크" };
	SuperMan sMan2{ false, "제리" };

	sMan1.print();
	sMan2.print();

	return 0;
}