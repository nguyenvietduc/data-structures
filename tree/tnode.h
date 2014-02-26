// Tree node class declaration
#ifndef __TNODE_H_
#define __TNODE_H_

class TNode {
	friend class Cellspace;
private:
	char label;
	int leftmost_child;
	int right_sibling;
	int parent;
public:
	TNode();
	TNode(char);
	~TNode();
	char get_label() { return label; }
	void set_label(char);
	int get_leftmost_child() { return leftmost_child; }
	void set_leftmost_child(int);
	int get_right_sibling() { return right_sibling; }
	void set_right_sibling(int);
	int get_parent() { return parent; }
	void set_parent(int);
};

#endif