#include<iostream>
#include<iomanip>
#include"3.3.h"
using namespace std;
double celsius_to_fah(double cel);
double fah_to_celsius(double fah);
int main() {
	double cel, fah;
	while (1) {
		cout << "Celsius:";
		cin >> cel;
		cout << "Fahrenheit:" << setprecision(2)
			<< fixed << celsius_to_fah(cel)<<endl;
		cout << "------\n";
		cout << "Fahrenheit:";
		cin >> fah;
		cout << "Celsius:" << setprecision(2)
			<< fixed <<fah_to_celsius(fah) << endl;
		cout << "------\n";
	}
	return 0;
}