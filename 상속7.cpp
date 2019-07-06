#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man {
public:
	void run() {
		cout << "���� �ٴ�" << endl;
	}
};

class Bird {
public:
	void fly() {
		cout << "�ϴ��� ����" << endl;
	}
};

class Superman : public Man, public Bird {
public:
	string name;
	string space; //���ֹ�

	void print() {
		cout << "���۸��� �̸��� " << name << ", ���� �ִ� ���� " << space << endl;
	}
};

int main()
{
	Superman sMan;
	sMan.run(); //Man
	sMan.fly(); //Bird
	sMan.name = "Ŭ��ũ";
	sMan.space = "����";
	sMan.print();
	return 0;
}