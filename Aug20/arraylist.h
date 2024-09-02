#include "list.h"
#include <iostream>
using namespace std;
// ArrayList is a subclass of List
class ArrayList : public List {
	int size = 0;
	int* array;
	int cap;
	
	public:
	ArrayList() {
		cap = 5;
		array = (int*)malloc(cap * sizeof(int));
	}
	void add(int num) {
		if (size >= cap) {
			cap*=1.5;
			cout << "Prev addr " << array;
			array = (int*) realloc(array, cap * sizeof(int));
			cout << " and new addr " << array << endl;
		}
		cout << "Add " << num << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	int remove(int num) {
		for (int i = 0; i < size; i++) {
			if (num == array[i]) {
				for (int j = i; j < size-1; j++) {
					array[j] = array[j+1];
				} 
				size--;
				return i+1;
			}
		}
		return -1;
	}
	
	void print() {
		cout << "Size: "<< size << "/" << cap <<endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
