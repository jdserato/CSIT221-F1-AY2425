#include "entry.h"
#include <iostream>
using namespace std;

class Scoreboard {
	entry board[5];
	int size;
	
	public:
	bool add(entry e) {
		if (size >= 5) {
			return false;
		}
		board[size++] = e;
		return true;
	}
	
	void print(int n) { // 8 + 24 = 32
		cout << n << endl;
		for (int i = 0; i < 5; i++) {
//			cout << (i+1) << ". ";
			if (i < size) {
//				entry e;
//				entry* e = &board[i];
//				cout << e->name << " (" << e->college << ") - " << e->score << endl;
			} else {
//				cout << " (none)" << endl;
			}
		}
		print(n+1);
	}
};