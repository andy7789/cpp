#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Button {
public:
	string color;
	string text;

	//생성자 함수, 생성자를 여러개 만들수 있다.
	//입력값을 다르게 해야 동일한 이름을 가진
	//생성자 함수를 구분한다.
	//함수를 동일한 이름으로 사용할 수 있는 기능
	//하나의 이름으로 여럭의 기능을 구현
	//다형성(overloading, 오버로딩)
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