#include<iostream>
using namespace std;
//二（6）求最大公约数和最小公倍数
int gcd(int a, int b)//定义一个求最大公约数（greatest common divisor）的函数
{
	do {
		int temp = a % b;
		a = b;
		b = temp;
	} while (b != 0);//采用欧几里得辗转相除法求最大公约数
	return a;
}
int main()
{
	int a, b;
	while (cin >> a >> b) {
		cout << a << "、" << b << "的最大公约数为：" << gcd(a, b) << endl;
		cout << a << "、" << b << "的最小公倍数为：" << a * b / gcd(a, b) << endl;//最小公倍数即两数的乘积除以最大公因数
}
	return 0;
}