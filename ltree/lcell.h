// Cellspace Class declaration
// List of children representation of tree
#ifndef __LCELL_H_
#define __LCELL_H_

#define MAX_NODE 100

class LCell {
	friend class LCellspace;
private:
	int node_value;
	int next;
};

class LCellspace {
	friend class LTree;
private:
	LCell cellspace[MAX_NODE];
public:
	LCellspace();
	~LCellspace();
};

#endif
