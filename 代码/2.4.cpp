#include<iostream>
using namespace std;
//二（4）计算器程序
int main()
{
	int a, b;
	char ch;
	
	while (1)
	{
		cin >> a >> ch >> b;
		switch (ch) {
		case '+':
			cout << a << "+" << b << "=" << a + b << endl;
			break;
		case '-':
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		case '*':
			cout << a << "x" << b << "=" << a * b << endl;
			break;
		case '/':
			if (b == 0) {
				cout << "该计算式无意义" << endl;
			}
			else {
				cout << a << "/" << b << "=" << a / b << endl;
			}
			break;
		case '%':
			if (b == 0) {
				cout << "该计算式无意义" << endl;
			}
			else {
				cout << a << "%" << b << "=" << a % b << endl;
			}
			break;
		}
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '%')
		{
			cout << "你触发了退出程序功能" << endl;
			break;
		}	
	}
		
		return 0;
	
	}
	