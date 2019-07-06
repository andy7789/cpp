#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Talent {
public:
	int height; //Ű
	Talent() {}
	Talent(int h) : height{ h } {}
};

class Singer : public Talent {
public:
	string title; //��Ʈ��
	string company; //�Ҽӻ�
	
	Singer() {
		//�θ��� �⺻ ������ ȣ��(������)
	}
	Singer(int h, string t, string c) : Talent(h), title{ t }, company{ c } {}
	void print() {
		cout << height << ", " << title << ", " << company << endl;
	}
};

int main()
{
	Singer s1{200,"�¹���","�̾����۴�"};
	Singer s2{ 100,"�¸��","�̾��" };

	s1.print();
	s2.print();
	return 0;
}