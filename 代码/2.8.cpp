#include<iostream>
using namespace std;
//����8���õ�������ƽ����
int main()
{
	double a, x, y,temp(0);
	while (cin >> a) {
		x = a;
		if (a == 0) {
			cout << a << "��ƽ����Ϊ��" << a << endl;
		}
		else if (a > 0) {
			do {
				y = (x + a / x) / 2;
				temp = x;
				x = y;
				y = temp;
			} while (temp - x < -1e-10 || temp - x>1e-10);
			cout << a << "��ƽ����Ϊ��" << x << endl;
		}
		else {
			cout << "invalid a, input another a." << endl;
			continue;
		}
	}
	return 0;
}