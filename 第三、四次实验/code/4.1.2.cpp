#include<iostream>
using namespace std;
void bubble_sort(double a[],int len) {
	for (int i = 0; i < len; i++) {
		bool changed = false;
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				double t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				changed = true;
			}
		}
		if (changed == false) break;
	}
}
int main() {
	const int size = 10;
	double x[size];
	for (int i = 0; i<size; i++) {
		cin >> x[i];
	}
	int len = sizeof(x) / sizeof(x[0]);
	bubble_sort(x, len);
	for (int i = 0; i < size; i++) {
		cout << x[i] << " ";
	}
	return 0;
}