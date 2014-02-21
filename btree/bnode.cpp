// Binary Tree Node implementation
#include "bnode.h"
#include <stddef.h>

BNode::BNode(char input) {
	data = input;
	left_child = NULL;
	right_child = NULL;
}

BNode::~BNode() {
	// TODO deallocate memory here
}