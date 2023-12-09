#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
    double Num[100] = { 0 };
    int len = strlen(hexString);

    for (int i = len - 1; i >= 0; i--) {
        double t = static_cast<double>(hexString[i]);
        int j = len - i - 1;
        if (t >= 65 && t <= 70) {
            Num[j] = t - 55;
        }
        else if (t >= 97 && t <= 102) {
            Num[j] = t - 87;
        }
        else Num[j] = double(hexString[i] - '0');
    }

    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += Num[i] * pow(6.0, i);
    }
    return sum;
}
int main() {
    char hexnum[25];
    cout << "Enter a hex number: ";
    cin.get(hexnum, 25);
    cout << "\"" << hexnum << "\"=" << parseHex(hexnum);
    return 0;
}