#include <iostream>
#include "board.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << sizeof(Scoreboard);
	char op;
	entry e;
	Scoreboard* board = new Scoreboard();
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cout << "Enter name: ";
				cin.ignore();
				getline(cin, e.name);
				cout << "Enter college: ";
				getline(cin, e.college);
				cout << "Enter score: ";
				cin >> e.score;
				board->add(e);
				break;
			case 'p':
				board->print(1);
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while(op != 'x');
	return 0;
}
