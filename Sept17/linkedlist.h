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
		node* n = (node*) calloc(1, sizeof(node));
		n->elem = num;
		if (tail) {
			tail->next = n;
			tail = n;
		} else {
			tail = n;
			head = n;
		}
		size++;
	}
	void print() {
		if (size == 0) {
			cout << "Empty" << endl;
			return;
		}
		cout << "First Element: " << head->elem << endl;
		cout << "Last  Element: " << tail->elem << endl;
		node* curr = head;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
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
	
	int removeHead() {
		if (head) {
			int ret = head->elem;
			node* tmp = head;
			head = head->next;
			free (tmp);
			return ret;
		}
	}
	
	int remove(int num) {
		if (num == head->elem) {
			removeHead();
			return 1;
		} 
		node* curr = head;
		int pos = 2;
		while (curr->next->elem != num) {
			curr = curr->next;
			pos++;
		}
		node* tmp = curr->next;
		curr->next = tmp->next;
		if (tmp == tail) {
			tail = curr;
		}
		free(tmp);
		return pos;
	}
};
