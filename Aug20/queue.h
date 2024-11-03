class Queue { // Abstract Data Type
	public:
	virtual void enqueue(int e) = 0;
	virtual int dequeue() = 0;
	virtual int first() = 0;
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
};
