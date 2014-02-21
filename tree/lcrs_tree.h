// Leftmost-child Right-sibling representation of tree
// Tree class declaration
#ifndef __LCRS_TREE_H_
#define __LCRS_TREE_H_

class CSTree {
private:
	int the_root;
	Cellspace cellspace;
public:
	CSTree();
	~CSTree();

	void makenull(void);
	int root();
	int parent(int);
	int leftmost_child(int);
	int right_sibling(int);
	int label(int);
	int create(int,)

};

#endif