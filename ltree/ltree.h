// LTree class declaration
// List of Children representation
#ifndef __LTREE_H
#define __LTREE_H

#include "lcell.h"

class LTree {
private:
	LCellspace header[MAX_NODES];
	int root;  // store root explicitly here
public:
	LTree();
	~LTree();

	int leftmost_child(int);
	int parent(int);
	int right_sibling(int);
	int root() { return root; }
	void makenull();
	void create0();
	void create1();
	void create2();
	void create3();

};

#endif