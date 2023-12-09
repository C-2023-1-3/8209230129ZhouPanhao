#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
		for (int i = 0; i < strlen(s2); i++) {
			if (s2[i] == s1[0]) {
				int temp = i;
				bool same = true;
				for (int j = i;temp-i<strlen(s1); j++,temp++) {
					if (s2[j] != s1[temp - i]) {
						same = false;
						break;
					}
				}
				if (same == true) return i;
			}
		}
		return -1;
}
	
int main() {
	char s1[100];
	char s2[100];

	cout << "Enter the first string:";
	cin.getline(s1,100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);

	cout<<"indexOf(\"" << s1<<"\","<<"\""<<s2<<"\") is "<< indexOf(s1, s2);
	system("pause");
	return 0;
}