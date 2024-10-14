#include <iostream>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	list->addHead(13);
	list->addTail(4);
	list->addHead(7);
	list->addTail(2);
	list->addHead(8);
	list->addHead(9);
	list->addTail(16);
	list->print(); // 9 -> 8 -> 7 -> 13 -> 4 -> 2 -> 16
	cout << "Remove Tail: " << list->removeTail() << endl; // 16
	cout << "Remove Head: " << list->removeHead() << endl; // 9
	cout << "Remove Head: " << list->removeHead() << endl; // 8
	cout << "Remove Tail: " << list->removeTail() << endl; // 2
	list->addHead(1);
	list->addTail(8);
	list->print(); // 1 -> 7 -> 13 -> 4 -> 8
	cout << "Remove 13: " << list->remove(8) << endl;
	list->print();
	cout << "List is " << list << endl;
	delete list;
	cout << "List is " << list << endl;
	list = new LinkedList();
	list->addHead(913);
	list->addTail(94);
	list->addHead(97);
	list->addTail(92);
	list->addHead(98);
	list->addHead(99);
	list->addTail(916);
	list->print();
	return 0;
}
