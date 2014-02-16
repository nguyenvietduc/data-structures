// Queue class declaration

#ifndef __PQUEUE_H_
#define __PQUEUE_H_

class PQueue {
private:
	QNode* front;
	QNode* rear;
public:
	QNode();
	~QNode();

	void makenull(void);
	QNode* front(void);
	QNode* dequeue(void);
	int enqueue(int);
	bool empty(void);
};

#endif