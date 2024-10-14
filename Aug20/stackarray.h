#include "stack.h"
#include "arraylist.h"
class StackArray : public Stack {
	ArrayList* array;
	
	public:
	StackArray() {
		array = new ArrayList();
	}
	void push(int e)  {
		array->add(e);
	}
	int pop() {
		return array->removeLast();
	}
	int top() {
		return array->get(size());
	}
	int size() {
		return array->_size();
	}
	bool isEmpty() {
		return size() == 0;
	}
};
