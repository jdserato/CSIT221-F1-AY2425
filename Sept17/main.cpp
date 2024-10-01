#include <iostream>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* list = new LinkedList();
	list->add(13);
	list->add(4);
	list->add(7);
	list->add(2);
	list->add(8);
	list->add(9);
	list->add(16);
	list->print();
	cout << "Fifth Element: " << list->get(5) << endl;
	cout << "Remove 8: " << list->remove(8) << endl;
	cout << "Fifth Element: " << list->get(5) << endl;
	list->print();
	cout << "Remove 16: " << list->remove(16) << endl;
	list->print();
	cout << "Remove 13: " << list->remove(13) << endl;
	list->print();
	return 0;
}
