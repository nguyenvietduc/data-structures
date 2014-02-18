// Tree node implementation
#include "tnode.h"

TNode::TNode(int data) {
	value = data;
	leftmost_child = -1;
	right_sibling = -1;
}