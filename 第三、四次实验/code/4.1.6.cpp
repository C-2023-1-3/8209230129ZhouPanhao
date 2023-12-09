#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s); i++) {
		for (int j = 0; j < 26; j++) {
			if (static_cast<int>(s[i]) == 65+j||static_cast<int>(s[i])==97+j) {
				counts[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>(i + 97) << ":" << counts[i] << " times\n";
		}
	}
}
int main() {
	//cout << int('a');//97
	//cout<<int('a');//65
	char s[100];
	int counts[100] = { 0 };
	cout << "enter a string: ";
	cin.get(s,100);
	count(s, counts);
}