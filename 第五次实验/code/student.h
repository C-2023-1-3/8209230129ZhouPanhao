#pragma once
//1.在student.h里面进行类的声明
class Student {
public:
	Student() {

	}
	Student(int Num, const char* Name, char Sex) {
		num = Num;
		strcpy_s(name, Name);
		sex = Sex;
	}
	void display();
	void set_value(int ,const char*, char);//增加一个set_value函数，对数据成员赋初值
private:
	int num;
	char name[20];
	char sex;
};