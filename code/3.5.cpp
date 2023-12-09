#include<iostream>
using namespace std;
int peach(int days) {
	if (days == 1) {
		return 1;
	}	
	else
	return (peach(days-1) + 1) * 2;

}
int main() {
	int days;
	cout << "days: ";
	cin >> days;
	cout << "The number of the peaches is: "
		<< peach(days);
	return 0;
}