#include<iostream>
using namespace std;
class Time {
private:
	//1.设置数据成员为私有
	int hour;
	int minute;
	int sec;
public:
	//2.用成员函数实现输入输出功能
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