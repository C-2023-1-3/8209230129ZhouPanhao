#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	int r, h;
	cin >> r >> h;
	cout <<"��"<<r<<"Ϊ�뾶"<<h<<"Ϊ�ߵ�Բ׶���Ϊ" << (pi * r * r * h) / 3;
	return 0;
}