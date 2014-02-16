// Node class implementation

#include "pnode.h"
#include <stddef.h>

PNode::PNode(int data) {
	value = data;
	next = NULL;
	prev = NULL;
}
