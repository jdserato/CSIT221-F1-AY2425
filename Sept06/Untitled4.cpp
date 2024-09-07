#include <iostream>
#include "student.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Student s;
	for (int i = 0; true; i++) {
		Student* n =new Student;
		Student* n1 =new Student;
		Student* n2 =new Student;
		Student* n3 =new Student;
		Student* n11 =new Student;
		Student* n21 =new Student;
		Student* n22 =new Student;
		Student* n23 =new Student;
		cout << "Address: " << n << endl;
		delete n;
	}
	cout << "Address of s: " << &s << endl;
	s.name[0] = "Vince";
	cout << s.name[0] << endl;
	delete &s;
//	cout << s.name << endl;
	return 0;
}
