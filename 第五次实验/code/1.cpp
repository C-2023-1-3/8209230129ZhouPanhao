#include<iostream>
using namespace std;
class Time {
private:
	//1.�������ݳ�ԱΪ˽��
	int hour;
	int minute;
	int sec;
public:
	//2.�ó�Ա����ʵ�������������
	void in() {
		int h, m, s;
		scanf_s("%d%d%d", &h, &m, &s);
		hour = h;
		minute = m;
		sec = s;
	}
	void out() {
		printf("%d:%d:%d\n", hour, minute, sec);
	}
};
int main() {
	Time t1;
	t1.in();
	t1.out();
	return 0;
}