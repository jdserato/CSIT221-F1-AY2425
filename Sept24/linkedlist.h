#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node* head;
	node* tail;
	int size;
	
	node* add_between(int num, node* pred, node* succ) {
		node* n = new node;
		cout << "Address of " << num << " is " << n << endl; 
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		pred->next = n;
		succ->prev = n;
		size++;
		return n;
	}
	
	int remove_node(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		pred->next = succ;
		succ->prev = pred;
		size--;
		int stuff = n->elem;
		delete n;
		return stuff;
	}
	
	public:
	LinkedList() {
		size = 0;
		head = new node;
		tail = new node;
		head->next = tail;
		tail->prev = head;	
	}
	
	void addHead(int num) {
		add_between(num, head, head->next);
	}	
	
	void addTail(int num) {
		add_between(num, tail->prev, tail);
	}
	int removeHead() {
		remove_node(head->next);
	}	
	
	int removeTail() {
		remove_node(tail->prev);
	}
	
	void add(int num) { // addtail
		addTail(num);
	}
	void print() {
		cout << "Size: " << size << endl;
		if (size == 0) {
			cout << "Empty" << endl;
			return;
		}
//		cout << "First Element: " << head->elem << endl;
//		cout << "Last  Element: " << tail->elem << endl 
		cout << "From HEAD: ";
		node* curr = head->next;
		while (curr != tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl << "From TAIL: ";
		curr = tail->prev;
		while (curr != head) {
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
		node* curr = head->next;
		int pos = 1;
		while (curr != tail) {
			if (curr->elem == num) {
				remove_node(curr);
				return pos;
			}
			curr = curr->next;
			pos++;
		}
	}
	
	~LinkedList() {
		cout<<"Deleting myself from here"<<endl;
//		node* curr = head;
//		while (curr) {
//			curr = head;
//			head = head->next;
//			free(curr);
//		} 
		
		node* curr = head;
		while (curr != tail) {
			curr = curr->next;
			delete curr->prev;
		}
		delete curr;

//		while (size != 0) {
//			remove_node(head->next);	
//		}
//		delete head;
//		delete tail;
	}
};
