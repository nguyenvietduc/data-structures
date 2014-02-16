// Queue Main Test program
#include "pqueue.h"
#include <iostream>

using namespace std;

int main() {
	PQueue* integer_queue = new PQueue;
	integer_queue->print();
	integer_queue->enqueue(1);
	integer_queue->enqueue(2);
	integer_queue->enqueue(3);
	integer_queue->print();

	int node_1 = integer_queue->dequeue();
	integer_queue->print();

	QNode* node_2 = integer_queue->front();
	integer_queue->print();

	cout << node_1 << " " << node_2->get_value() << endl;

	return 0;
}