// Trie - Linked list implementation
// Trie Node class declaration
#include "tnode.h"
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

TNode::TNode() {
	value = '^';			// special character for root node
	eow = false;
	children_list_head = NULL;
	next = NULL;
}

TNode::~TNode() {

}

// set value for this node
int TNode::set_node_value(char input) {
	// TODO perhaps rejecting invalid input would be a nice feature
	//if (!isalpha(intput))
	//	return 0;
	value = input;
	return 1;
}

// return pointer to child node with value c
TNode* TNode::exist_child(char c) {
	if (!children_list_head)
		return NULL;
	TNode* current_child = children_list_head;
	while (current_child && current_child->get_node_value() != c)
		current_child = current_child->next;
	return current_child;
}

// return child node that has value of specified c
TNode* TNode::get_child_node(char c) {
	TNode* current_child = exist_child(c);
	if (!current_child) {
		current_child = new TNode;
		current_child->set_node_value(c);
		current_child->next = children_list_head;
		children_list_head = current_child;
	}
	return current_child;
}

int TNode::set_end_of_word(bool eow_input) {
	eow = eow_input;
}