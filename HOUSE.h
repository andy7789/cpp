#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class House {
public:
	string color;
	int door;
	void tv() {
		cout << "tv를 보다" << endl;
	}
	void sleep() {
		cout << "잠을 자다" << endl;
	}
	void print() {
		cout << "지붕색: " << color << ", 문의 개수: " << door;
	}
};