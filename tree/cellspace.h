// Cellspace class declaration
#ifndef __CELLSPACE_H_
#define __CELLSPACE_H_

#include "tnode.h"
#include <vector>

#define MAX_NODES 1000

typedef unsigned int TREE;

class Cellspace {
private:
	TNode nodes[MAX_NODES];
	std::vector<int> idx_set;
public:
	Cellspace();
	~Cellspace();

	TREE get_node(char);
	void set_parenthood(TREE,TREE);
	void set_siblinghood(TREE,TREE);
	void print(TREE);
	void print_children(TREE);
	char get_parent_of_node(TREE);
	char get_label_of_node(TREE);
	char get_right_sibling_label(TREE);
	char get_leftmost_child_label(TREE);
	void makenull(TREE);
};

#endif