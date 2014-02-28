// LTree class declaration
// List of Children representation
#ifndef __LTREE_H
#define __LTREE_H

#include "lcell.h"

#define MAX_NODES 100

class LTree {
private:
	int root;
	LCell cellspace[MAX_NODES];
	int headers[MAX_NODES];
public:
	LTree();
	LTree(LCell[]);
	~LTree();

	void create0(int);

};

#endif