// Stack class declaration

#ifndef __PSTACK_H_
#define __PSTACK_H_

#include "snode.h"

class PStack {
private:
	SNode* head;
public:
	PStack();
	~PStack();

	// methods
	SNode* top();;
	SNode* pop();
	void push(int);
	bool is_empty();
	void makenull();

	void print();
};

#endif