// Array implementation of stack
#include "astack.h"
#include <iostream>

using namespace std;

AStack::AStack() {
	head = MAX;
}

// functions

bool AStack::is_empty() {
	if (head == MAX)
		return true;
	return false;
}

int AStack::top() {
	if (is_empty())
		return NULL;
	return values[head];
}

int AStack::pop() {
	if (is_empty())
		return NULL;
	head++;
	return values[head-1];
}

int AStack::push(int x) {
	if (head == 0)
		return 0; // stack is full

	head--;
	values[head] = x;
	return 1;
}

void AStack::makenull() {
	head = MAX;
}

void AStack::print() {
	for (int i = head; i < MAX; i++)
		cout << values[i] << " ";
	cout << endl;
}