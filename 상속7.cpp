#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man {
public:
	void run() {
		cout << "빨리 뛰다" << endl;
	}
};

class Bird {
public:
	void fly() {
		cout << "하늘을 날다" << endl;
	}
};

class Superman : public Man, public Bird {
public:
	string name;
	string space; //우주밖

	void print() {
		cout << "수퍼맨의 이름은 " << name << ", 날수 있는 곳은 " << space << endl;
	}
};

int main()
{
	Superman sMan;
	sMan.run(); //Man
	sMan.fly(); //Bird
	sMan.name = "클라크";
	sMan.space = "우주";
	sMan.print();
	return 0;
}