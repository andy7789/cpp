#include "pch.h"
#include <iostream>
#include <string>
#include <fstream> //file 관련

using namespace std;
int main()
{
	ofstream os{ "C:/temp/me.txt" };
	for (int i = 0; i < 7; i++)
	{
		os << i + 1 << endl;
	}
	return 0;
}





