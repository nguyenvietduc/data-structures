// LTree class implementation
// List of Children representation
#include "ltree.h"
#include <iostream>

using namespace std;

LTree::LTree() {
	root = -1;
}

LTree::LTree(LCell[] space) {
	root = -1;
	cellspace = space;
}

LTree::~LTree() {
	delete [] headers;
	delete [] cellspace;
}

void LTree::create0(int node) {
	cellspace[node] = LCell(node,-1);
	root = node;
}