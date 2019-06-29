#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

//부품을 만들기
//부품을 틀만 만든다(class)
//부품의 정적특징, 동적특징
//정적특징: 색, 속도, 기어
//			(멤버변수)
//동적특징: 출발하기, 정지하기, 가속하기, 감소하기
//			(멤버함수)
//함수를 만들때는 반환값, 입력값

class Car {
public:
	string color;
	int speed;
	int gear;

	int speedUp(int s) {
		return s + 10;
	}
	
	int speedDown(int s) {
		return s - 10;
	}
	
	int speedDown(int s, int t) {
		return s * t - 10;
	} //다형성(함수이름 동일하게 사용 가능)

	string go() {
		cout << "출발" << endl;
		return 0;
	}

	string stop() {
		cout << "정지" << endl;
		return 0;
	}

	void print() {
		cout << color << ", " << speed << ", " << gear << endl;
	}
};

int main()
{
	Car car1, car2;
	//원래 프로그래밍 목적이
	//클래스를 복사한 객체임
	//car1, car2를 객채(대상)
	//객체는 Car의 실제값(instance)
	//객체생성
	//객체생성시 멤버변수의 초기값을 넣어주는 생성자!

	car1.color = "red";
	car1.speed = 100;
	car1.gear = 2;

	car2.color = "blue";
	car2.speed = 200;
	car2.gear = 1;

	car1.print();
	car2.print();


	int up = car1.speedUp(100);
	int down = car2.speedDown(200);

	string go = car1.go();
	string stop = car2.stop();

	cout << "속도 up: " << up << endl;
	cout << "속도 Down: " << down << endl;
	cout << "출발" << go << endl;
	cout << "정지" << stop << endl;


	return 0;
}