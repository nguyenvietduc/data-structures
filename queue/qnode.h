// Node class declaration

#ifndef __QNODE_H_
#define __QNODE_H_

class QNode {
	friend class PQueue;
private:
	int value;
	QNode* next;
public:
	QNode(int);
	int get_value() { return value; }
};

#endif