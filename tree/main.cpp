// Main program for Leftmost-Child Right-Sibling tree
#include "cellspace.h"
#include <iostream>

using namespace std;

// Shared cellspace of all node
Cellspace* cellspace;

TREE create0(char label) {
	return cellspace->get_node(label);
}

TREE create1(char label, TREE t1) {
	TREE tnew = cellspace->get_node(label);
	cellspace->set_parenthood(tnew,t1);
	return tnew;
}

TREE create2(char label, TREE t1, TREE t2) {
	TREE tnew = cellspace->get_node(label);
	cellspace->set_parenthood(tnew,t1);
	cellspace->set_siblinghood(t1,t2);
	return tnew;
}

void print_tree(TREE ta) {
	cellspace->print(ta);
}

char parent(TREE idx) {
	cellspace->get_parent_of_node(idx);
}

char root(TREE t) {
	label(t)
}

char label(TREE node) {
	return cellspace->get_label_of_node(node);
}

int main() {
	// init cellspace
	cellspace = new Cellspace;

	TREE td = create0('D');
	TREE tb = create0('B');
	TREE tc = create1('C',td);
	TREE ta = create2('A',tb,tc);

	print_tree(ta);
	print_tree(tc);

	cout << parent(tb);
	cout << endl;

	return 0;
}