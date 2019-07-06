#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void bark() {
		cout << "Â¢´Ù. " << endl;
	}
};

class Dog : public Animal {
public:
	void bark() { //ÀçÁ¤ÀÇ(override: ¿À¹ö¶óÀÌµù)
		cout << "¸Û¸Û¸Û¸Û" << endl;
	}
};

class Cat : public Animal {
public:
	void bark() { //ÀçÁ¤ÀÇ(override: ¿À¹ö¶óÀÌµù)
		cout << "¾ß¿Ë¾ß¿Ë" << endl;
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