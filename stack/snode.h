// Node class for stack
#ifndef __SNODE_H_
#define __SNODE_H_

class SNode {
	friend class PStack;
private:
	SNode* next;
	int value;
public:
	SNode(int);
	int get_value();
};

#endif