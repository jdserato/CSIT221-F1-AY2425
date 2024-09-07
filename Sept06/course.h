#include <iostream>
#include "student.h"
using namespace std;
class Course {
	string topic;
	Student** students;
	int size;
	int capacity;
	
	public:
	Course(string topic) {
		this->topic = topic;
		size = 0;
		capacity = 10;
//		students = new Student[capacity];
		students = (Student**) malloc(capacity * sizeof(Student*));
	}
	
	void addStudent(Student* s) {
		cout << "ADDING " << s->name << endl;
		students[size++] = s;
		cout << "DONE" << endl;
	}
	
	void print() {
		cout << "Title: "<< topic << endl;
		cout << "Student size: " << size << endl;
		for (int i = 0; i < capacity; i++) {
			if (students[i] == nullptr) {
				cout << i+1<< ". (none)" << endl;
			} else {
				cout << i+1 << ". (" << students[i] << "):" << students[i]->name << endl;
			}
		}
	}
};
