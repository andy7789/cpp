#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	void study() {
		cout << "대학원에서 공부를 하다" << endl;
	}

};

class Shop {
public:
	void sale() {
		cout << "장사를 하다" << endl;
	}
};

class Owner : public Student, public Shop {
public:
	void internet() {
		cout << "인터넷 쇼핑몰" << endl;
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