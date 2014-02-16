// Pointer implementation of stack
#include "pstack.h"
#include <iostream>

using namespace std;

PStack::PStack() {
	head = NULL;
}

PStack::~PStack() {
	makenull();
}

// methods

bool PStack::is_empty() {
	return (head == NULL);
}

SNode* PStack::pop() {
	SNode* tmp = head;
	head = head->next;
	return tmp;
}

SNode* PStack::top() {
	return head;
}

void PStack::push(int x) {
	SNode* new_node = new SNode(x);
	new_node->next = head;
	head = new_node;
}

void PStack::makenull() {
	SNode* tmp;
	while (head != NULL) {
		tmp = head;
		head = head->next;
		delete tmp;
	}
}

void PStack::print() {
	SNode* tmp = head;
	while (tmp != NULL) {
		cout << tmp->value << " ";
		tmp = tmp->next;
	}
	cout << endl;
}