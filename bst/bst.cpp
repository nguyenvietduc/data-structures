// BST class implementation
#include "bst.h"
#include <stddef.h>
#include <iostream>
using namespace std;

BST::BST() {
	root = NULL;
}

BST::~BST() {

}

void BST::insert(int input) {
	if (root == NULL) {
		root = new BNode(input);
		return;
	}

	BNode* current = root;
	int val;
	while (current != NULL) {
		val = current->get_value();
		if (input == val)
			current = NULL;
		else if (input < val) {
			if (current->left_child == NULL) {
				current->left_child = new BNode(input);
				current = NULL;
			}
			else current = current->left_child;
		}
		else {
			if (current->right_child == NULL) {
				current->right_child = new BNode(input);
				current = NULL;
			}
			else current = current->right_child;
		}
	}
}

bool BST::member(int input) {
	int is_member = false;
	BNode* current = root;
	while (current != NULL) {
		if (input == current->get_value()) {
			current = NULL;
			is_member = true;
		} 
		else if (input < current->get_value()) current = current->left_child;
		else current = current->right_child;
	}
	return is_member;
}

int BST::deletemin() {
	/*
	if (root == NULL)
		return NULL;

	BNode* current = root;
	BNode* tmp = root;
	int ret;
	bool at_root = false;
	while (current->left_child != NULL) {
		tmp = current;
		current = current->left_child;
	}

	if (tmp == current)
		at_root = true;

	ret = current->get_value();
	current = current->right_child;
	tmp->left_child = current;
	if (at_root)
		root = current;
	return ret;
	*/
	return deletemin(&root);
}

int BST::deletemin(BNode** the_root) {
	if (the_root == NULL)
		return NULL;

	BNode* current = *the_root;
	BNode* tmp = *the_root;
	int ret;
	bool at_root = false;
	while (current->left_child != NULL) {
		tmp = current;
		current = current->left_child;
	}

	if (tmp == current)
		at_root = true;

	ret = current->get_value();
	current = current->right_child;
	tmp->left_child = current;
	if (at_root)
		*the_root = current;
	return ret;
}


void BST::remove(int input) {
	BNode* current = root;
	BNode* tmp = root;
	bool left = false;

	while (current != NULL) {
		tmp = current;
		if (input < current->get_value()) {
			current = current->left_child;
			left = true;
		}
		else if (input > current->get_value()) {
			current = current->right_child;
			left = false;
		}
		else if (current->left_child == NULL && current->right_child == NULL)
			delete current;
		else if (current->left_child == NULL) {
			current = current->right_child;
			left = false;
			break;
		}
		else if (current->right_child == NULL) {
			current = current->left_child;
			left = true;
			break;
		}
		else {
			current->set_value(deletemin(&(current->right_child)));
			break;
		}
	}

	if (tmp == current || tmp == root)
		root = current;
	else {
		if (left) tmp->left_child = current;
		else tmp->right_child = current;
	}
}

void BST::print() {
	int path[100];
	print_paths_recursive(root, path, 0);
}

void BST::print_paths_recursive(BNode* root, int path[], int len) {
	if (root == NULL)
		return;

	path[len++] = root->get_value();
	if (root->get_left_child() == NULL && root->get_right_child() == NULL)
		print_array(path, len);
	else {
		print_paths_recursive(root->get_left_child(), path, len);
		print_paths_recursive(root->get_right_child(), path, len);
	}
}

void BST::print_array(int path[], int len) {
	for (int i=0; i<len; ++i)
		cout << path[i] << ' ';
	cout << endl;
}