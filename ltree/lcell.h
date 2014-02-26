// Cellspace Class declaration
// List of children representation of tree
#ifndef __LCELL_H_
#define __LCELL_H_

#define MAX_NODE 100

class LCell {
	friend class LTree;
private:
	int cells[MAX_NODE];
	int last;
public:
	LCell();
	~LCell();

	int get_last() { return last; }
	int get(int);
	bool contains(int);
};

#endif
