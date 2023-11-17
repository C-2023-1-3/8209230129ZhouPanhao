#include<iostream>
using namespace std;
//二（1）对输入的字符进行转换
int main()
{
	char ch;
	while (cin >> ch) {
		if (ch <= 'z' && ch >= 'a') {
			cout << "转换结果为：" << (char)(ch - 32) << endl;
		}
		else {
			ch++;
			cout <<"转换结果为：" << int(ch) << endl;
		}
	}
	return 0;
}