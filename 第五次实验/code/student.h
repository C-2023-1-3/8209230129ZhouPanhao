#pragma once
//1.��student.h��������������
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
	void set_value(int ,const char*, char);//����һ��set_value�����������ݳ�Ա����ֵ
private:
	int num;
	char name[20];
	char sex;
};