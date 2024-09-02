#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
	List* list = new ArrayList();
	char op;
	int num;
	while (true) {
		cout << "op: ";
		cin >> op;
		switch(op) {
			case 'a':
				cin >> num;
				list->add(num);
				break;
			case 'p':
				list->print();
				break; 
		}
	}
	list->print();
	cout << sizeof(ArrayList);
	cout << "2nd elem: "<<list->get(2)<<endl;
//	cout << "Removing 13 at pos " <<list->remove(13)<<endl;
	list->print();
	return 0;
}
