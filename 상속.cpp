#include "pch.h"
#include <iostream>
#include <string>
#include "HOUSE.h"

int main()
{
	House h1;

	h1.color = "green";
	h1.door = 1;

	h1.tv();
	h1.sleep();
	h1.print();

	return 0;
}