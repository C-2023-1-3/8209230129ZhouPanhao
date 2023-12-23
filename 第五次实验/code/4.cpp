#include<iostream>
using namespace std;
class Student {
friend void max(Student* ps[], int size);
private:
	int id;
	int score;
public:
	Student(int id, int score) {
		this->id = id;
		this->score = score;
	}
};
void max(Student* ps[], int size) {
	int max = 0;

		for (int i = 0; i < size; ++i) {
			if (ps[i]->score >= max) {
				max = ps[i]->score;
			}
		}
		for (int i = 0; i < size; ++i) {
			if (ps[i]->score == max)
				cout << ps[i]->id << endl;
		}
	
}
int main() {
	Student s[5] = {	Student(230701,92),
						Student(230702,90),
						Student(230703,88),
						Student(230104,92),
						Student(230105,89)};
	int size = sizeof(s) / sizeof(Student);
	Student* ps[5] = {&s[0],&s[1] ,&s[2] ,&s[3] ,&s[4] };
	max(ps, size);
	return 0;
}