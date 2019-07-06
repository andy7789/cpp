#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Button {
public:
	string color;
	string text;

	//������ �Լ�, �����ڸ� ������ ����� �ִ�.
	//�Է°��� �ٸ��� �ؾ� ������ �̸��� ����
	//������ �Լ��� �����Ѵ�.
	//�Լ��� ������ �̸����� ����� �� �ִ� ���
	//�ϳ��� �̸����� ������ ����� ����
	//������(overloading, �����ε�)
	Button() {}
	Button(string c, string t) : color{ c }, text{ t }{}
	void print() {
		cout << color << ", " << text << endl;
	}
};

int main()
{
	Button b1{ "red","PowerOn" };
	Button b2{ "green","PowerUp" };
	return 0;
}