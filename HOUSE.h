#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class House {
public:
	string color;
	int door;
	void tv() {
		cout << "tv�� ����" << endl;
	}
	void sleep() {
		cout << "���� �ڴ�" << endl;
	}
	void print() {
		cout << "���ػ�: " << color << ", ���� ����: " << door;
	}
};