#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	//default
	string etc = "�л�����"; //��Ÿ

	string sn = "201405"; //�ֹι�ȣ
protected:
	string tel = "0114567"; //����ó
public:
	string name = "ȫ�浿"; //�̸�
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
	//class�ۿ����� public�� ���� ����
	cout << car1.name << endl;

	Truck truck1;
	truck1.print();
	return 0;
}