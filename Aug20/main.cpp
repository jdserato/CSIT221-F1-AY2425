#include <iostream>
#include <stack>
#include "queuearray.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Queue* queue = new QueueArray();
	char op;
	int num;
	while (true) {
	try{
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'e':
				cin >> num;
				queue->enqueue(num);
				break;
			case 'd':
				cout << "Dequeued: " << queue->dequeue() << endl;
				break;
			case 'f':
				cout << "First: " << queue->first() << endl;
				break;
			case 's':
				cout << "Size: " << queue->size() << endl;
				break;
			case '?':
				cout << "IsEmpty: " << queue->isEmpty() << endl;
				break;
		}
	} catch (...) {
		cout << "EHE";
	}
	}
	return 0;
}
