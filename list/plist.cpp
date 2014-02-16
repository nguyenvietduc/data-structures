// All of the functions for the list class

#include "plist.h"
#include <cstdlib>
#include <iostream>

using namespace std;

PList::PList() {
	// set all pointers to NULL in the constructor
	head = NULL;
	tail = NULL;
}

PList::~PList() {
	makenull();
}

/*
Required methods
*/

PNode* PList::first() {
	return head;
}

PNode* PList::end() {
	return tail;
}

PNode* PList::retrieve(int p) {
	PNode* ptr = head;
	while (ptr->next != NULL) {
		p--;
		if (p==0)
			break;
		ptr = ptr->next;
	}
	return ptr;
}

PNode* PList::locate(int x) {
	PNode* p = head;
	while (p != NULL) {
		if (p->value == x)
			return p;
		else
			p = p->next;
	}
	return p;
}

PNode* PList::previous(PNode* current) {
	PNode* p = head;
	if (p == NULL)
		return NULL;

	while (p->next != NULL && p->next != current)
		p = p->next;

	return p;
}

PNode* PList::next(PNode* current) {
	/*
	PNode* p = head;
	while (p != NULL && p != current)
		p = p->next;
	return p->next;
	*/
	return current->next;
}

void PList::del(PNode* current) {
	if (head == NULL)
		return;
	PNode* tmp = current->next;
	current->next = current->next->next;
	delete tmp;
}

void PList::del_front() {
	PNode* tmp = head;
	head = head->next;
	delete tmp;
	if (head == NULL)
		tail = NULL;

}

void PList::del_back() {
	if (tail == NULL)
		return;
	if (head == tail) {
		head = NULL;
		tail = NULL;
		return;
	}
	PNode* tmp = tail;
	tail = tail->prev;
	delete tmp;
	tail->next = NULL;
}

void PList::del_back_no_prev() {
	// without prev pointer
	PNode* current = head;
	if (current == NULL)
		return;
	if (current == tail) {
		delete head;
		head = NULL;
		tail = NULL;
	}
	while(current->next != tail) {
		current = current->next;
	}
	PNode* tmp = tail;
	tail = current;
	tail->next = NULL;
	delete tmp;
}

void PList::insert(PNode* position, int value) {
	PNode* new_node = new PNode(value);
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;
	}
	
	PNode* tmp = position->next;
	position->next = new_node;
	new_node->next = tmp;
}

void PList::insert_front(int x) {
	PNode* new_node = new PNode(x);
	new_node->next = head;
	if (head == NULL)
		tail = new_node;
	else
		head->prev = new_node;
	head = new_node;
}

void PList::insert_back(int x) {
	/*
	PNode* tmp = head;
	PNode* new_node = new PNode(x);
	if (head == NULL) {
		head = new_node;
		return;
	}

	while(tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	*/
	PNode* new_node = new PNode(x);
	if (tail == NULL) {
		tail = new_node;
		head = new_node;
		return;
	}
	tail->next = new_node;
	new_node->prev = tail;
	tail = new_node;
}

void PList::makenull() {
	PNode* tmp;
	while (head != NULL) {
		tmp = head;
		head = head->next;
		delete tmp;
	}
}


/*

	Utility method
*/

void PList::print() {
	PNode* tmp;
	for(tmp = head; tmp != NULL; tmp = tmp->next)
		cout << tmp->value << " ";
	cout << endl;
}
