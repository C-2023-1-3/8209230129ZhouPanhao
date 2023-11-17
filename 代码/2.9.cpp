#include<iostream>
using namespace std;
int apples(int sum = 0)//利用apples函数返回购买的苹果总数
{
	for (int i = 2; ; ) {
		sum += i;
		if (sum > 100)
		{
			sum -= i;//将加起来超出100的那一天买的苹果减去
			break;
		}
		i *= 2;//进行购买数量的翻倍
	}
	return sum;
}
int days(int sum = 0,int d=1)//利用day函数返回天数
{
	for (int i = 2; ; ) {
		sum += i;
		if (sum > 100)
		{
			sum -= i;
			d -= 1;
			break;
		}
		i *= 2;
		++d;//天数递增
	}
	return d;
}
//二（9）买苹果
int main() {
	const double price = 0.8;
	cout << "共买了" << apples ()<< "个苹果" << endl;
	cout << "共买了" << days() << "天" << endl;
	cout << "买苹果一共花了" << apples() * price << "元" << endl;
	cout<<"平均每天花了" << apples() * price / days()<<"元";
}