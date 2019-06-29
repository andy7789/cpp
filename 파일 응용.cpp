#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	ofstream os{ "C:/temp/0629.txt" };

	string name;
	int age;
	string gender;

	cout << "이름 입력: " << endl; cin >> name;
	cout << "나이 입력: " << endl; cin >> age;
	cout << "성별 입력: " << endl; cin >> gender;

	os << name << endl;
	os << age << endl;
	os << gender << endl;
	
	return 0;
}