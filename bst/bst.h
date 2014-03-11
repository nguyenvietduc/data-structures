// BST class declaration
#ifndef __BST_H_
#define __BST_H_

#include "bnode.h"

class BST {
private:
	BNode* root;
public:
	BST();
	~BST();
	BNode* get_root() { return root; }
	void insert(int);
	void remove(int);
	bool member(int);
	BNode* min();
	int deletemin();
	int deletemin(BNode**);
};

#endif