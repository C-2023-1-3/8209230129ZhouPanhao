#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c, f;
	cin >> f;
	c = (f - 32) * 5/9;
	cout << f << "华氏度对应摄氏度为：";
	cout << fixed << setprecision(2) << c << endl;
	return 0;
}