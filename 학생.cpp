#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	void study() {
		cout << "�����ϴ�" << endl;
	}
};

class Elemen : public Student {
public:
	void study() {
		cout << "�ٳѱ� �����ϴ�" << endl;
	}
};

class Middle : public Student {
public:
	void study() {
		cout << "����ܾ �ܿ��" << endl;
	}
};

class High : public Student {
public:
	void study() {
		cout << "���԰����ϴ�" << endl;
	}
};

int main()
{
	Elemen e1;
	Middle m1;
	High h1;
	
	e1.study();
	m1.study();
	h1.study();

	return 0;
}