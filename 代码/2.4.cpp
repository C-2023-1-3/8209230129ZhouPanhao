#include<iostream>
using namespace std;
//����4������������
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
				cout << "�ü���ʽ������" << endl;
			}
			else {
				cout << a << "/" << b << "=" << a / b << endl;
			}
			break;
		case '%':
			if (b == 0) {
				cout << "�ü���ʽ������" << endl;
			}
			else {
				cout << a << "%" << b << "=" << a % b << endl;
			}
			break;
		}
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '%')
		{
			cout << "�㴥�����˳�������" << endl;
			break;
		}	
	}
		
		return 0;
	
	}
	