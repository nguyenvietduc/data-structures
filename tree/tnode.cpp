// Tree node implementation
#include "tnode.h"
#include <stddef.h>

TNode::TNode() {
	label = NULL;
	leftmost_child = -1;
	right_sibling = -1;
	parent = -1;
}

TNode::TNode(char label_value) {
	label = label_value;
	leftmost_child = -1;
	right_sibling = -1;
}

TNode::~TNode() {

}

void TNode::set_label(char value) {
	label = value;
}

void TNode::set_leftmost_child(int idx) {
	leftmost_child = idx;
}

void TNode::set_right_sibling(int idx) {
	right_sibling = idx;
}

void TNode::set_parent(int idx) {
	parent = idx;
}