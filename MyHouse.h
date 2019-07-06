#include "pch.h"
#include <iostream>
#include <string>
#include "HOUSE.h"

using namespace std;

class MyHouse : public House {
public:
	int size;

	void fish() {
		cout << "물고기를 키우다" << endl;
	}
};