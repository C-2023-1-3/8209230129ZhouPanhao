#include<iostream>
using namespace std;
//����3���������εı߳������ж��������Ƿ�Ϊ����������
int main()
{
	int a,b,c;
	while (cin >> a >> b >> c)
	{
	 if (a + b > c && a + c > b && b + c > a)
		{
			cout << "��" << a << "��" << b << "��" << c
				<< "Ϊ���ߵ��������ܳ�Ϊ" << a + b + c << endl;
			if (a == b || b == c || a == c)
			{
				cout << "��������Ϊ����������" << endl;
			}
		}
		else
			cout << "��������" << a << "��" << b << "��" << c << "Ϊ�߳���������" << endl;
	}
	
	return 0;
}