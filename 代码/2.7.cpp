#include<iostream>
using namespace std;
//二（7）循环结构输出特定图形
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}