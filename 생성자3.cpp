#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car { //�θ� Ŭ���� (����Ŭ����)
public:
	string color;
	Car() {
		cout << "Car�� �⺻ ������ ȣ���" << endl;
	} //�⺻ ������
	Car(string c) : color{ c } {
		cout << "Car�� �Ķ���� �ִ� ������ ȣ���" << endl;
	}
	~Car(){
		cout << "Car�� �Ҹ��� ȣ���" << endl;
	}
};

class Truck :public Car {
public:
	int weight;

	Truck() {
		//�θ��� �⺻�����ڸ� ���� ȣ������
		//������ ȣ��
		cout << "Truck�� �⺻ ������ ȣ���" << endl;
	}
	Truck(int w, string c) : Car(c) {
		//"�θ��� �⺻������"�� ȣ��ǰ� �Ǿ��ִ�. (������ ȣ��)
		//�ڽ��� �Ķ���� �ִ� �����ڸ� 
		//ȣ���ϴ� ���� �θ�Ŭ��������
		//���� �ѱ�� ����
		//�θ��� �Ķ���� �ִ� �����ڸ�
		//��������� ȣ�����־�� �Ѵ�.
		weight = w;
	}
	~Truck() {
		cout << "Truck�� �Ҹ��� ȣ���" << endl;
	}
};

int main()
{
	Truck truck;

	return 0;
}