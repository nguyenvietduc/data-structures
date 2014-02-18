// Cellspace class implementation
#include "cellspace.h"
#include <iostream>

using namespace std;

Cellspace::Cellspace() {
	nodes = new TNode[MAX_NODES];
}

Cellspace::~Cellspace() {
	delete nodes;
}