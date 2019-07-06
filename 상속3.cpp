#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	string name;
	string color;

	void eat() {
		cout << "¸Ô´Ù" << endl;
	}

};

class Dog : public Animal {
//µ¿Àû Æ¯Â¡
public:
	void bark() {
		cout << "Â¢´Ù" << endl;
	}
};

class Cat : public Animal {
public:
	void yayong() {
		cout << "¾ß¿Ë ¿ï´Ù" << endl;
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