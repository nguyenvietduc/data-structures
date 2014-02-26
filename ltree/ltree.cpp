// LTree class implementation
// List of Children representation
#include "ltree.h"
#include <iostream>

using namespace std;

LTree::LTree() {
	root = -1;
}

LTree::~LTree() {
	delete [] header;
}

// Return the value of the leftmost child of node n
int LTree::leftmost_child(int n) {
	LCell cellspace = header[n];
	if (cellspace.get_last() == -1) // n is a leaf
		return -1;
	return cellspace.get(0);
}

// Return the value of the parent of node n
int LTree::parent(int n) {
	LCell cellspace;
	// Run through possible parents of n
	for (int p=0; p < MAX_NODES; p++) {
		cellspace = header[p];
		if (cellspace.contains(n))
			return p;
	}
	return -1;
}

// Return the value of the right sibling of node n
int LTree::right_sibling(int n) {
	int p = parent(n);
	if (p == -1)
		return -1;

	LCell cellspace = header[p];
	int last = cellspace.get_last();
	for (int i=0; i < last; ++i)
		if (cellspace.get(i) == n)
			return cellspace.get(i+1);

	return -1;
}