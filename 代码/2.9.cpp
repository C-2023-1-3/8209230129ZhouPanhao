#include<iostream>
using namespace std;
int apples(int sum = 0)//����apples�������ع����ƻ������
{
	for (int i = 2; ; ) {
		sum += i;
		if (sum > 100)
		{
			sum -= i;//������������100����һ�����ƻ����ȥ
			break;
		}
		i *= 2;//���й��������ķ���
	}
	return sum;
}
int days(int sum = 0,int d=1)//����day������������
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
		++d;//��������
	}
	return d;
}
//����9����ƻ��
int main() {
	const double price = 0.8;
	cout << "������" << apples ()<< "��ƻ��" << endl;
	cout << "������" << days() << "��" << endl;
	cout << "��ƻ��һ������" << apples() * price << "Ԫ" << endl;
	cout<<"ƽ��ÿ�컨��" << apples() * price / days()<<"Ԫ";
}