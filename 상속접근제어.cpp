#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	//default
	string etc = "학생차량"; //기타

	string sn = "201405"; //주민번호
protected:
	string tel = "0114567"; //연락처
public:
	string name = "홍길동"; //이름
};

class Truck : public Car {
public:
	void print() {
		cout << tel << ", " << name << ", " << endl;
	}
};

int main()
{
	Car car1;
	//class밖에서는 public만 접근 가능
	cout << car1.name << endl;

	Truck truck1;
	truck1.print();
	return 0;
}