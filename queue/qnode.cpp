// Node class implementation

#include "qnode.h"
#include <stddef.h>

QNode::QNode(int data) {
	value = data;
	next = NULL;
}

QNode::~QNode() {
	// TODO deallocate memory here
}