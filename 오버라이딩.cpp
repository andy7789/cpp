#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Bank {
public:
	double getinterestRate() {
		return 0; //은행은 대출을 내다
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
	cout << "보통 은행의 이자율은: " << normal.getinterestRate() << endl;
	cout << "좋은 은행의 이자율은: " << good.getinterestRate() << endl;
	cout << "나쁜 은행의 이자율은: " << bad.getinterestRate() << endl;

	return 0;
}