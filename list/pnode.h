// Node class declaration

#ifndef __PNODE_H__
#define __PNODE_H__

class PNode {
	friend class PList;
private:
	PNode* next;
	PNode* prev;
	int value;
public:
	PNode(int);
	int get_value() { return value; }
};

#endif