// Cellspace class declaration
#ifndef __CELLSPACE_H_
#define __CELLSPACE_H_

#include "tnode.h"

#define MAX_NODES 1000

class Cellspace {
private:
	TNode* cells;
public:
	Cellspace();
	~Cellspace();
};

#endif