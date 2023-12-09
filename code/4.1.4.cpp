#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 + size2; i++) {
		if (i < size1) list3[i] = list1[i];
		else
		list3[i] = list2[i - size1];
	}
	
	for (int i = 0; i < size1 + size2; i++) {
		bool changed = false;
		for (int j = 0; j < size1 + size2 - i - 1; j++) {
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
				changed = true;
			}
			
		}
		if (changed == false) {
			break;
		}
	}
	for (int j = 0; j < size1 + size2; j++) {
		cout << list3[j]<<" ";
	}
}
int main() {
	int size1=80,size2=80;
	int* list1 = new int[size1];
	int* list2 = new int[size2];

	cout << "enter list1:";
	for (int i = -1; i < size1; i++) {
		if (i == -1)cin >> size1;
		else cin >> list1[i];
	}

	cout << "enter list2:";
	for (int i = -1; i < size2; i++) {
		if (i == -1)cin >> size2;
		else cin >> list2[i];
	}
	
	int list3[80];
	cout << "the merged list is: "; 
	merge(list1, size1, list2, size2, list3);
	
	if (list1 != nullptr) {
		delete[]list1;
		list1 = nullptr;
	}
	if (list2 != nullptr) {
		delete[]list2;
		list2 = nullptr;
	}
	
	system("pause");
	return 0;
}