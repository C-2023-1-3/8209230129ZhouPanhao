#include<iostream>
using namespace std;
void openlocker() {
    bool locker[100] = { false };//0表示关闭，最初全部关闭
    for (int i = 0; i <= 100; i++) {
        if (i == 0)
            for (int j = 0; j < 100; j++) locker[j] = true;//第一个同学打开所有的储物柜
        else
            for (int j = i; j < 100; j+=(i+1)) {
                if (locker[j] == false) locker[j] = true;
                else locker[j] = false;
            }
    }
    for (int i = 0; i < 100; i++) {
        if (locker[i] == true) cout << i + 1 << " ";
    }
}
int main() {
    openlocker();
    return 0;
}