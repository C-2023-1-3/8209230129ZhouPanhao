#include<iostream>
using namespace std;
class V {
private:
	int length;
	int width;
	int height;
public:
	void setL() {
		printf("length£º");
		int l;
		scanf_s("%d", &l);
		length = l;
	}
	void setW() {
		printf("width: ");
		int w;
		scanf_s("%d", &w);
		width = w;
	}
	void setH() {
		printf("height: ");
		int h;
		scanf_s("%d", &h);
		height = h;
	}
	void calculate() {
		printf("vol: ");
		cout << length * width * height << endl;
	}
};
int main() {
	V v1;
	v1.setL();
	v1.setW();
	v1.setH();
	v1.calculate();
	V v2;
	v2.setL();
	v2.setW();
	v2.setH();
	v2.calculate();
	V v3;
	v3.setL();
	v3.setW();
	v3.setH();
	v3.calculate();
	return 0;
}