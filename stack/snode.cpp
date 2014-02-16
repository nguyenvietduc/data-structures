// SNode class implementation

#include "snode.h"
#include <stddef.h>

SNode::SNode(int data) {
	value = data;
	next = NULL;
}

int SNode::get_value() {
	return value;
}