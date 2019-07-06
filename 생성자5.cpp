#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Talent {
public:
	int height; //키
	Talent() {}
	Talent(int h) : height{ h } {}
};

class Singer : public Talent {
public:
	string title; //히트곡
	string company; //소속사
	
	Singer() {
		//부모의 기본 생성자 호출(묵시적)
	}
	Singer(int h, string t, string c) : Talent(h), title{ t }, company{ c } {}
	void print() {
		cout << height << ", " << title << ", " << company << endl;
	}
};

int main()
{
	Singer s1{200,"굿바이","싱어컴퍼니"};
	Singer s2{ 100,"굿모닝","싱어엔터" };

	s1.print();
	s2.print();
	return 0;
}