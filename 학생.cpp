#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	void study() {
		cout << "공부하다" << endl;
	}
};

class Elemen : public Student {
public:
	void study() {
		cout << "줄넘기 연습하다" << endl;
	}
};

class Middle : public Student {
public:
	void study() {
		cout << "영어단어를 외우다" << endl;
	}
};

class High : public Student {
public:
	void study() {
		cout << "대입공부하다" << endl;
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