#include<iostream>
using namespace std;
void openlocker() {
    bool locker[100] = { false };//0��ʾ�رգ����ȫ���ر�
    for (int i = 0; i <= 100; i++) {
        if (i == 0)
            for (int j = 0; j < 100; j++) locker[j] = true;//��һ��ͬѧ�����еĴ����
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