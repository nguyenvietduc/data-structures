// Tree node class declaration
#ifndef __TNODE_H_
#define __TNODE_H_

class TNode {
	friend class Cellspace;
private:
	int value;
	int leftmost_child;
	int right_ribling;
public:
	TNode(int);
	int get_value() { return value; }
	int get_leftmost_child() { return leftmost_child; }
	int get_right_sibling() { return right_ribling; }
};

#endif