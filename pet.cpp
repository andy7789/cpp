#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
	string name;
	int age;

	//멤버변수 초기화를 넣어주는 함수가 따로있다
	//클래스를 복사(객체생성)
	//객체생성시 자동으로 호출되는 함수(생성자)
	//생성자(함수)는 클래스이름과 동일(대문자로 시작하는 유일한 함수)
	Pet(string n, int a) {
		name = n;
		age = a;
	}

	void eat() {
		cout << "먹다" << endl;
	}
	void speak(string n, int age) {
		cout << "멍멍멍멍" << endl;
	}
	void speak(string n) {
		cout << "야옹야옹" << endl;
	}
	void print() {
		cout << "이름은" << name << ", " << age << endl;
	}
};

int main()
{
	Pet dog, cat;

	dog.name = "멍멍이";
	dog.age = 3;
	dog.print();

	cout << "---------------" << endl;
	
	cat.name = "야옹이";
	cat.age = 5;
	cat.print();
	return 0;
}