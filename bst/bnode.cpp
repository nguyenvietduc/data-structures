// Binary Tree implementation (pointer based)

#include "bnode.h"
#include <stddef.h>

BNode::BNode(int data) {
	value = data;
	left_child = NULL;
	right_child = NULL;
}

BNode::~BNode() {
	// TODO deallocate memory here
}