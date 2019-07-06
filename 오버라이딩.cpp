#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Bank {
public:
	double getinterestRate() {
		return 0; //������ ������ ����
	}
};

class BadBank : public Bank {
public:
	double getinterestRate() {
		return 10;
	}
};

class NormalBank : public Bank {
public:
	double getinterestRate() {
		return 5;
	}
};

class GoodBank : public Bank {
public:
	double getinterestRate() {
		return 3.0;
	}
};

int main()
{
	NormalBank normal;
	GoodBank good;
	BadBank bad;
	cout << "���� ������ ��������: " << normal.getinterestRate() << endl;
	cout << "���� ������ ��������: " << good.getinterestRate() << endl;
	cout << "���� ������ ��������: " << bad.getinterestRate() << endl;

	return 0;
}