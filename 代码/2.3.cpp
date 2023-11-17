#include<iostream>
using namespace std;
//二（3）求三角形的边长，并判断三角形是否为等腰三角形
int main()
{
	int a,b,c;
	while (cin >> a >> b >> c)
	{
	 if (a + b > c && a + c > b && b + c > a)
		{
			cout << "以" << a << "、" << b << "、" << c
				<< "为三边的三角形周长为" << a + b + c << endl;
			if (a == b || b == c || a == c)
			{
				cout << "该三角形为等腰三角形" << endl;
			}
		}
		else
			cout << "不存在以" << a << "、" << b << "、" << c << "为边长的三角形" << endl;
	}
	
	return 0;
}