#include <iostream>
#include "binarytree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree* tree = new BinaryTree();
	node* thirteen = tree->addRoot(13);
	try {
		node* seven = tree->addRoot(7);
		cout << seven->elem << endl;
	} catch (const exception& e) {
		cout << e.what() << endl;
	}
	node* six = tree->addLeft(thirteen, 6);
	tree->print();
	try {
		node* twenty = tree->addLeft(six, 20);
		node* twentythree = tree->addLeft(six, 23);
	} catch (const exception& e) {
		cout << e.what() << endl;
	}
	try {
		node* thirtyone = tree->addRight(six, 31);
		node* thirtyfive = tree->addRight(six, 35);
	} catch (const exception& e) {
		cout << e.what() << endl;
	}
	tree->print();
	return 0;
}
