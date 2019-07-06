#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void bark() {
		cout << "¢��. " << endl;
	}
};

class Dog : public Animal {
public:
	void bark() { //������(override: �������̵�)
		cout << "�۸۸۸�" << endl;
	}
};

class Cat : public Animal {
public:
	void bark() { //������(override: �������̵�)
		cout << "�߿˾߿�" << endl;
	}
};

int main()
{
	Dog dog;
	Cat cat;
	dog.bark();
	cat.bark();

	return 0;
}