// Binary Tree node declaration

#ifndef __BNODE_H_
#define __BNODE_H_

class BNode {
	friend class BST;
private:
	int value;
	BNode* left_child;
	BNode* right_child;
public:
	BNode(int);
	~BNode();
	int get_value() { return value; }
	BNode* get_left_child() { return left_child; }
	BNode* get_right_child() { return right_child; }
	void set_value(int);
};

#endif