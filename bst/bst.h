// BST class declaration
#ifndef __BST_H_
#define __BST_H_

#include "bnode.h"

class BST {
private:
	BNode* root;
	void print_paths_recursive(BNode*,int[],int);
	void print_array(int[],int);
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
	void print();
};

#endif