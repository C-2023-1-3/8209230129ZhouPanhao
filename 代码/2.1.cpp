#include<iostream>
using namespace std;
//����1����������ַ�����ת��
int main()
{
	char ch;
	while (cin >> ch) {
		if (ch <= 'z' && ch >= 'a') {
			cout << "ת�����Ϊ��" << (char)(ch - 32) << endl;
		}
		else {
			ch++;
			cout <<"ת�����Ϊ��" << int(ch) << endl;
		}
	}
	return 0;
}