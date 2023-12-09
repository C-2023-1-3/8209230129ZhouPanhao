#include<iostream>
using namespace std;
void sort(int arr[],int size) {
	for (int i = 0; i < size - 1; i++) {
		bool changed = false;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				changed = true;
			}
		}
		if (changed == false) {
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	int size;
	cout << "Enter the size: ";
	cin >> size;
	int* ptr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> ptr[i];
	}
	sort(ptr,size);
	delete[]ptr;
	return 0;
}