// Cellspace Class implementation
// List of children representation of tree
#include "lcell.h"

using namespace std;

LCell::LCell() {
	last = -1;
}

LCell::~LCell() {
	delete [] cells;
}

/*
	Return the value of idx-th child
*/
int LCell::get(int idx) {
	return cells[idx];
}

/*
	Return if a node is in this cellspace
*/
bool LCell::contains(int n) {
	for (int i=0; i<=last; i++)
		if (cells[i] == n)
			return true;
	return false;
}