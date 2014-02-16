// Queue class implementation (pointer based)

#include "pqueue.h"
#include <iostream>

using namespace std;

PQueue::PQueue() {
	// remember to set all pointers to NULL in the constructor
	head = NULL;
	tail = NULL;
}

PQueue::~PQueue() {
	makenull();
}

void PQueue::makenull() {
	// TODO deallocate all memory here
}

QNode* PQueue::front() {
	if (empty())
		return NULL;
	return head;
}

int PQueue::dequeue() {
	if (empty())
		return NULL;

	QNode* tmp_node = head;
	int tmp = tmp_node->get_value();
	head = head->next;

	// Corner case: dequeueing last node
	if (head == NULL)
		tail = NULL;

	delete tmp_node;

	return tmp;
}

int PQueue::enqueue(int x) {
	QNode* new_node = new QNode(x);

	if (empty()) {
		head = new_node;
		tail = new_node;
	} else {
		tail->next = new_node;
		tail = new_node;
	}

	return 1;
}

/*
	Returns true of the queue is empty.
*/
bool PQueue::empty() {
	return (head == NULL);
}

void PQueue::print() {
	QNode* tmp = head;
	while(tmp != NULL) {
		cout << tmp->get_value() << " ";
		tmp = tmp->next;
	}
	cout << endl;
}