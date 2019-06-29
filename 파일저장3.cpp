#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	string day, jamok, a;
	
	cout << "날짜: " << endl; cin >> day;
	ofstream os{ "C:/temp/" + day + ".txt" };
	cout << "제목: " << endl; cin >> jamok;
	cout << "내용: " << endl; cin >> a;
	
	os << day << endl;
	os << jamok << endl;
	os << a << endl;
	
	return 0;
}