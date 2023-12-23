#include<iostream>
#include"student.h"
int main() {
	Student stud;
	stud.set_value(006, "zbs", 'f');
	Student stud1(007, "tcg", 'm');
	stud.display();
	stud1.display();
	return 0;
}