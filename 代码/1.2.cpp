#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	int r, h;
	cin >> r >> h;
	cout <<"以"<<r<<"为半径"<<h<<"为高的圆锥体积为" << (pi * r * r * h) / 3;
	return 0;
}