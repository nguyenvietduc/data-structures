// BST Class declaration

#ifndef __BST_H_
#define __BST_H_

#include "bnode.h"

class BST {
private:
	BNode* root;
public:
	BST();
	~BST();

	BNode* root();
};

#endif