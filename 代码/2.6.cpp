#include<iostream>
using namespace std;
//����6�������Լ������С������
int gcd(int a, int b)//����һ�������Լ����greatest common divisor���ĺ���
{
	do {
		int temp = a % b;
		a = b;
		b = temp;
	} while (b != 0);//����ŷ�����շת����������Լ��
	return a;
}
int main()
{
	int a, b;
	while (cin >> a >> b) {
		cout << a << "��" << b << "�����Լ��Ϊ��" << gcd(a, b) << endl;
		cout << a << "��" << b << "����С������Ϊ��" << a * b / gcd(a, b) << endl;//��С�������������ĳ˻������������
}
	return 0;
}