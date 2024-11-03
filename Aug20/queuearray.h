#include "queue.h"
#include "arraylist.h"
#include <stdexcept>

class QueueArray : public Queue {
	int _size = 0;
	int start = 0, end = 0;
	int array[8];
	int cap = 8;
	
	private:
	void enqueue(int e) { // addLast
		if (size() >= cap)
		 {
			throw new exception();
		}
		if (end == cap) {
			end = 0;
		}
		array[end++] = e;
		_size++;
	}
	int dequeue() {
		start++;
		_size--;
		// ? ? ? ? ? ? ? 8 ?
		//               s s++
		int tmp = array[start-1];
		if (start == cap) {
			start = 0;
		}
		return tmp;
	}
	int first() {
		return array[start];
	}
	int size() {
		return _size;
	}
	bool isEmpty() {
		return size() == 0;
	}
};
