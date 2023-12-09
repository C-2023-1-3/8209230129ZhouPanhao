#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int primenum[200];
	for (int count = 0; count < 200; ) {
		for (int i = 2;; i++) {
			if (is_prime(i) == 1) {
				primenum[count] = i;
				count++;
			}
			if (count == 200)
				break;
		}
	}
	for (int j = 0; j < 20; j++) {
		for (int m = j * 10; m < j * 10 + 10; m++) {
			cout << primenum[m] << "\t";
		}
		cout << endl;
	}
	return 0;
}