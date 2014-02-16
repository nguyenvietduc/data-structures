// Queue class declaration

#ifndef __PQUEUE_H_
#define __PQUEUE_H_

#include "qnode.h"

class PQueue {
private:
	QNode* head;
	QNode* tail;
public:
	PQueue();
	~PQueue();

	void makenull(void);
	QNode* front(void);
	int dequeue(void);
	int enqueue(int);
	bool empty(void);
	void print(void);
};

#endif