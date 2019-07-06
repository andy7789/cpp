#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	int speed;

	void setspeed(int s) { //setter
		speed = s;
	}

	int getspeed() {
		return speed;
	}
};

class Sportscar :public Car {
public:
	bool turbo;
	void setTurbo(bool newvalue) {
		turbo = newvalue;
	}
	bool getTurbo() {
		return turbo;
	}
};

class Truck : public Car {
public:
	int weight;
	void setweight(int w) {
		weight = w;
	}
	bool getweight() {
		return weight;
	}
};

int main()
{
	Truck t;
	t.setspeed(100);
	cout << "���õ� speed : " << t.getspeed() << endl;

	Sportscar s;
	s.setTurbo(true);
	cout << "���õ� turbo : " << s.getTurbo() << endl;

	return 0;
}