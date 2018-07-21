//program that registers name and marks
#include<iostream>
using namespace std;

class student {
public:
	char *name;
	int grade1, grade2;

	student(char *nam, int gra, int gra2) {
		name = nam; 
		grade1 = gra; 
		grade2 = gra2;
	}

	int calc_media() {

		return (grade1 + grade2) / 2;
	}

	void print() {
		cout << "Student: " << name << "\n media: " << calc_media() << endl;
	}
	
};

int main() {

	char *na;

	int grade1, grade2;

	cout << "Enter the student's name: " << endl;
	cin >> na;

	cout << "Enter the two grades: " << endl;
	cin >> grade1;
	cin >> grade2;

	student stud(na, grade1, grade2);

	stud.print();

	system("pause");

	return 0;
}