#include<iostream>
using namespace std;
void output(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool only = true;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) only = false;
        }
        if (only == true) cout << arr[i]<<" ";
    }
}
int main() {
    const int size = 10;
    cout << "Enter " << size << " numbers: ";
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "The distinct numbers are: ";
    output(arr, size);
    system("pause");
    return 0;

}