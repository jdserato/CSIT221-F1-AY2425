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
			n->prev = tail;
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
		cout << "FROM Head: " << endl;
		node* curr = head;
		while (curr) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "FROM Tail: " << endl;
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
	
	int removeHead() {
		if (head) {
			int ret = head->elem;
			node* tmp = head;
			head = head->next;
			head->prev  = NULL; //:)
			free (tmp);
			return ret;
		}
	}
	
	int removeBetween(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		if (pred) {
			pred->next = succ;
		} else {
			head = succ;
		}
		if (succ) {
			succ->prev = pred;
		} else {
			tail = pred;
		}
		int ret = n->elem;
		free(n);
		return ret;
	}
	
	int removeAt(int pos) {
		node* curr;
		if (pos <= size/2) {
			curr = head;
			for (int i = 1; i < pos-1; i++) {
				curr = curr->next;
			}
		} else {
			curr = tail;
			for (int i = size; i > pos; i--) { // 6 > 6
				curr = curr->prev;
			}
		}
		size--;
		return removeBetween(curr);
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
		cout << tmp;
		curr->next = tmp->next;
		
		if(tmp != tail) {
			tmp->next->prev = curr;
		} else if (tmp == tail) {
			tail = curr;
		}
//		if(curr != tail){
//			curr->next->prev = curr;
//		}
//		
		free(tmp);
		return pos;
	}
};
