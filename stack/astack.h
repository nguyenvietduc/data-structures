// Stack class declaration (Array based)
#ifndef __ASTACK_H_
#define __ASTACK_H_

#define MAX 1000000

class AStack {
private:
	int values[MAX];
	int head;
public:
	AStack();

	int top();
	int pop();
	int push(int);
	bool is_empty();
	void makenull();

	void print();
};

#endif