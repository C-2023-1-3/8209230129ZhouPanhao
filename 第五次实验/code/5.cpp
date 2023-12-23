#include<iostream>
using namespace std;
class Point {
private:
	int x=60;
	int y=80;
public:
	Point(){}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		printf("(%d,%d)\n", x, y);
	}
};
int main() {
	Point p;
	p.setPoint(1, 2);
	p.display();
	return 0;
}