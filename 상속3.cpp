#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	string name;
	string color;

	void eat() {
		cout << "�Դ�" << endl;
	}

};

class Dog : public Animal {
//���� Ư¡
public:
	void bark() {
		cout << "¢��" << endl;
	}
};

class Cat : public Animal {
public:
	void yayong() {
		cout << "�߿� ���" << endl;
	}
};

int main()
{
	Dog dog;
	Cat cat;

	dog.color = "brown";
	dog.eat();
	dog.bark();

	cat.color = "white";
	cat.eat();
	cat.yayong();

	return 0;
}