// Main program for Leftmost-Child Right-Sibling tree
#include "cellspace.h"
#include <iostream>

using namespace std;

// Function prototypes
TREE right_sibling(TREE);
TREE leftmost_child(TREE);
TREE create0(char);
TREE create1(char,TREE);
TREE create2(char,TREE,TREE);
TREE create3(char,TREE,TREE,TREE);
void print_tree(TREE);
TREE parent(TREE);
char label(TREE );
char root(TREE);
void makenull(TREE);

// Shared cellspace of all trees
Cellspace* cellspace;


int main() {
	// init cellspace
	cellspace = new Cellspace;

	// Creating tree
	TREE tm = create0('M');
	TREE tn = create0('N');
	TREE ti = create2('I',tm,tn);
	TREE te = create1('E',ti);
	TREE td = create0('D');
	TREE tb = create2('B',td,te);

	TREE tj = create0('J');
	TREE tk = create0('K');
	TREE tg = create2('G',tj,tk);

	TREE tl = create0('L');
	TREE th = create1('H',tl);

	TREE tf = create0('F');
	TREE tc = create3('C',tf,tg,th);

	TREE ta = create2('A',tb,tc); // This is our root

	// ROOT
	cout << root(ta) << endl;

	// PARENT
	cout << "Parent of 'E' is " << label(parent(te)) << endl;

	// LEFTMOST_CHILD
	cout << "Leftmost child of 'G' is " << label(leftmost_child(tg)) << endl;

	// RIGHT SIBLING
	cout << "Right sibling of 'F' is " << label(right_sibling(tf)) << endl;

	// LABEL
	cout << "Label of node th is " << label(th) << endl;

	// MAKENULL
	makenull(ta);

	return 0;
}

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

TREE create3(char label, TREE t1, TREE t2, TREE t3) {
	TREE tnew = cellspace->get_node(label);
	cellspace->set_parenthood(tnew,t1);
	cellspace->set_siblinghood(t1,t2);
	cellspace->set_siblinghood(t2,t3);
	return tnew;
}

void print_tree(TREE ta) {
	cellspace->print(ta);
}

TREE parent(TREE idx) {
	return cellspace->get_parent_of_node(idx);
}

char root(TREE t) {
	return label(t);
}

char label(TREE node) {
	return cellspace->get_label_of_node(node);
}

TREE leftmost_child(TREE node) {
	return cellspace->get_leftmost_child(node);
}

TREE right_sibling(TREE node) {
	return cellspace->get_right_sibling(node);
}

void makenull(TREE root) {
	cellspace->makenull(root);
}