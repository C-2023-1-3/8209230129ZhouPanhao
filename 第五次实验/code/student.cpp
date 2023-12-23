#include<iostream>
#include"student.h"
#include<cstring>
using namespace std;
void Student::display() {//¶¨Òådisplayº¯Êı
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}
void Student::set_value(int Num,const char* Name, char Sex) {
	num = Num;
	strcpy_s(name, Name);
	sex = Sex;
}