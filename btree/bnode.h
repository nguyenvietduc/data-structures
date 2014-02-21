// Binary Tree Node of char type
#ifndef __BNODE_H_
#define __BNODE_H_

class BNode {
	friend class BTree;
private:
	char data;
	BNode* left_child;
	BNode* right_child;
public:
	BNode(int);
	~BNode();
	char get_value() { return data; }
};

#endif