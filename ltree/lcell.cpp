// Cellspace Class implementation
// List of children representation of tree
#include "lcell.h"

using namespace std;

LCell::LCell() {
	next = -1;
	value = -1;
}

LCell::LCell(int v, int n) {
	value = v;
	next = n;
}

LCell::~LCell() {
}