// Cellspace class implementation
#include "cellspace.h"
#include <iostream>
#include <algorithm>	// std::random_shuffle
#include <vector>
#include <ctime>
#include <cstdlib>		// std::rand, std::srand

using namespace std;

Cellspace::Cellspace() {
	std::srand(unsigned (std::time(0)));
	for (int i=0; i<MAX_NODES; i++)
		idx_set.push_back(i);
	std::random_shuffle(idx_set.begin(), idx_set.end());
}

Cellspace::~Cellspace() {
	delete nodes;
}

TREE Cellspace::get_node(char value) {
	int idx = idx_set.front();
	nodes[idx].set_label(value);
	idx_set.erase(idx_set.begin());
	return (TREE)idx;
}

void Cellspace::set_parenthood(TREE tnew, TREE t1) {
	nodes[tnew].set_leftmost_child(t1);
	nodes[t1].set_parent(tnew);
}

void Cellspace::set_siblinghood(TREE t1, TREE t2) {
	nodes[t1].set_right_sibling(t2);
	nodes[t2].set_parent(nodes[t1].get_parent());
}

void Cellspace::print(TREE root) {
	// bad graphical representation of tree
	// but works for verifying small tree structure
	print_children(root);
}

void Cellspace::print_children(TREE node_idx) {
	TNode node = nodes[node_idx];
	cout << node.get_label();
	int id = node.get_leftmost_child();
	if (id != -1) {
		node = nodes[id];
		cout << " " << node.get_label();
		id = node.get_right_sibling();
		while (id != -1) {
			node = nodes[id];
			cout << " " << node.get_label();
			id = node.get_right_sibling();
		}
	}
	cout << endl;
}

TREE Cellspace::get_parent_of_node(TREE idx) {
	return nodes[idx].get_parent();
}

char Cellspace::get_label_of_node(TREE t) {
	return nodes[t].get_label();
}

TREE Cellspace::get_leftmost_child(TREE t) {
	return nodes[t].get_leftmost_child();
}

TREE Cellspace::get_right_sibling(TREE t) {
	return nodes[t].get_right_sibling();
}

void Cellspace::makenull(TREE root) {
	if (root == -1)
		return;

	int id = nodes[root].get_leftmost_child();
	TNode node;
	if (id != -1) {
		node = nodes[id];
		makenull(id);
		id = node.get_right_sibling();
		while (id != -1) {
			makenull(id);
			node = nodes[id];
			id = node.get_right_sibling();
		}
	}
	node = nodes[root];
	node.set_label(NULL);
	node.set_parent(-1);
	node.set_leftmost_child(-1);
	node.set_right_sibling(-1);
}