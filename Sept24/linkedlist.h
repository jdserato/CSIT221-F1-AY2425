#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	public:
	void add(int num) {
		
	}
	void print() {
		if (size == 0) {
			cout << "Empty" << endl;
			return;
		}
		cout << "First Element: " << head->elem << endl;
		cout << "Last  Element: " << tail->elem << endl << "From HEAD: ";
		node* curr = head;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "From TAIL: ";
		curr = tail;
		while (curr) {
			cout << curr->elem << " <- ";
			curr = curr->prev;
		}
		cout << endl;
	}
	
	int get(int pos) {
		node* curr = head;
		for (int i = 1; i < pos; i++) {
			curr = curr->next;
		}
		return curr->elem;
	}
	
	int remove(int num) {
		return 0;
	}
};
