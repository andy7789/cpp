#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	void study() {
		cout << "���п����� ���θ� �ϴ�" << endl;
	}

};

class Shop {
public:
	void sale() {
		cout << "��縦 �ϴ�" << endl;
	}
};

class Owner : public Student, public Shop {
public:
	void internet() {
		cout << "���ͳ� ���θ�" << endl;
	}
};

int main()
{
	Owner owner;
	owner.study();
	owner.sale();
	owner.internet();

	return 0;
}