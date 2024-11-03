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
	
	int removeLast() {
		return array[--size];
	}
	
	void add(int num) { // addLast
		if (size >= cap) {
			cap*=1.5;
			cout << "Prev addr " << array;
			array = (int*) realloc(array, cap * sizeof(int));
			cout << " and new addr " << array << endl;
		}
		cout << "Add " << num << endl;
		array[size++] = num;
	}
	
	void addFirst(int num) {
		if (size >= cap) {
			cap*=1.5;
			cout << "Prev addr " << array;
			array = (int*) realloc(array, cap * sizeof(int));
			cout << " and new addr " << array << endl;
		}
		// Shift elements to the right
		for (int i = size-1; i >= 0; i--) {
			array[i+1] = array[i];
		}
		size++;
		array[0] = num;
	}
	
	int removeFirst() {
		// Shift elements to the right
		// 4 6 8 10 10 
		//       i 
		int tmp = array[0];
		for (int i = 0; i < size-1; i++) {
			array[i] = array[i+1];
		}
		size--;
		return tmp;
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
	
	int _size() {
		return size;
	} 
	
	void print() {
		cout << "Size: "<< size << "/" << cap <<endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
