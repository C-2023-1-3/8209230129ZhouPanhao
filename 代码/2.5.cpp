#include<iostream>
using namespace std;
int main()
{
	/*char line[100];
	cin.getline(line, 100);
	cout << line << endl;*/

	//string str;
	//getline(cin, str);//ʹ��getline����Ҫ����ͷ�ļ�string
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
	cout << "������" << number << "��" << endl;
	cout << "Ӣ����ĸ��" << english << "��" << endl;
	cout << "���ĺ�����" << chinese/2 << "��" << endl;//һ�����ֻ�ռ�����ֽ�
	cout << "�����ַ���" << others << "��" << endl;
	return 0;
}