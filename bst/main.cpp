// Main BST
#include "bst.h"
#include <iostream>
using namespace std;

int main() {
	BST* bst = new BST;
	bst->insert(5);
	bst->insert(-1);
	bst->insert(6);
	bst->insert(7);
	bst->insert(-10);
	bst->insert(4);
	return 0;
}