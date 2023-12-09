#include<iostream>
using namespace std;
int gcd(int m, int n) {
	do {
		int t = m % n;
		m = n;
		n = t;
	} while (n != 0);
	return m;
}
int lcm(int& m, int& n) {
	return (m * n) / gcd(m, n);
}
int main() {
	int m, n;
	while (1) {
		cin >> m >> n;
		cout << "The greatest common divisor of " << m
			<< " and " << n << " is " << gcd(m, n) << endl;
		cout << "The lowest common multiple of "<<m
			<<" and "<<n<<" is " <<lcm(m,n) << endl;
	}
	return 0;
}