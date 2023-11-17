#include<iostream>
using namespace std;
int main()
{
	/*char line[100];
	cin.getline(line, 100);
	cout << line << endl;*/

	//string str;
	//getline(cin, str);//使用getline函数要包含头文件string
	//cout << str << endl

	char c;
	int chinese(0), english(0), number(0), others(0);
	while (c = cin.get()) {
		if ((int)c >= 48 && (int)c <= 57) {
			number++;
		}
		else if (((int)c >= 65 && (int)c <= 90) || ((int)c >= 97 && (int)c <= 122)) {
			english++;
		}
		else if ((int)c<0) {
			chinese++;
		}
		else {
			others++;
		}
		if (c == '\n') {
			break;
		}
	}
	cout << "数字有" << number << "个" << endl;
	cout << "英文字母有" << english << "个" << endl;
	cout << "中文汉字有" << chinese/2 << "个" << endl;//一个汉字会占两个字节
	cout << "其他字符有" << others << "个" << endl;
	return 0;
}