#include "node.h"
#include <iostream>
#include <stdexcept>
using namespace std;
class BinaryTree {
	node* root;
	int size;
	
	public:
	BinaryTree() {
		root = NULL;
		size = 0;
	}
	
	node* addRoot(int num) {
		if (root) {
			throw runtime_error("Tree already has a root");
		}
		root = new node();
		root->elem = num;
		size++;
		return root;
	}
	
	node* addLeft(node* p, int num) {
		if (p->left) {
			throw runtime_error(to_string(p->elem) + " already has a left: " + to_string(p->left->elem));
		}
		p->left = new node();
		p->left->elem = num;
		p->left->parent = p;
		size++;
		return p->left;
	}
	
	node* addRight(node* p, int num) {
		if (p->right) {
			throw runtime_error(to_string(p->elem) + " already has a right: " + to_string(p->right->elem));
		}
		p->right = new node();
		p->right->elem = num;
		p->right->parent = p;
		size++;
		return p->right;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		cout << root->elem << endl;
		print(root);
	}
	
	void print(node* n) {
		if (n->left) {
			print(n->left);
		}
		cout << n->elem << " ";
		if (n->right) {
			print(n->right);
		}
	}
};
