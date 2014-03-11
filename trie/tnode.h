// Trie - Linked list implementation
// Trie Node class declaration
#ifndef __TNODE_H_
#define __TNODE_H_

// trie node
class TNode {
	friend class Trie;
private:
	char value;						// value of the node 
	bool eow;						// true, if this node is a leaf node, i.e. end of a valid word
	TNode* children_list_head;		// pointer to the first node of the children list
	TNode* next;					// pointer to the next cell in the list
public:
	TNode();
	~TNode();
	// getters
	bool end_of_word() { return eow; }
	char get_node_value() { return value; }
	TNode* get_child_node(char);
	TNode* get_first_child() { return children_list_head; }
	TNode* get_next() { return next; }
	TNode* exist_child(char);
	// setters
	int set_node_value(char);
	int set_end_of_word(bool);
};

#endif