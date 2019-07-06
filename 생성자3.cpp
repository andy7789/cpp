#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car { //부모 클래스 (수퍼클래스)
public:
	string color;
	Car() {
		cout << "Car의 기본 생성자 호출됨" << endl;
	} //기본 생성자
	Car(string c) : color{ c } {
		cout << "Car의 파라메터 있는 생성자 호출됨" << endl;
	}
	~Car(){
		cout << "Car의 소멸자 호출됨" << endl;
	}
};

class Truck :public Car {
public:
	int weight;

	Truck() {
		//부모의 기본생성자를 먼저 호출해줌
		//묵시적 호출
		cout << "Truck의 기본 생성자 호출됨" << endl;
	}
	Truck(int w, string c) : Car(c) {
		//"부모의 기본생성자"가 호출되게 되어있다. (묵시적 호출)
		//자식의 파라메터 있는 생성자를 
		//호출하는 경우는 부모클래스에게
		//값을 넘기기 위해
		//부모의 파라메터 있는 생성자를
		//명시적으로 호출해주어야 한다.
		weight = w;
	}
	~Truck() {
		cout << "Truck의 소멸자 호출됨" << endl;
	}
};

int main()
{
	Truck truck;

	return 0;
}