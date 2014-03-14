// Trie - Linked list implementation
// Trie class implementation
#include "trie.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

Trie::Trie() {
	num_words = 0;
	num_nodes = 0;
	root = new TNode;
}

Trie::~Trie() {

}

int Trie::insert(char word[]) {
	int len = strlen(word);
	TNode* current = root;
	int i = 0; char c;
	// processing each character
	while (i < len) {
		c = word[i++];
		if (current->exist_child(c) == NULL)
			num_nodes++;
		current = current->get_child_node(tolower(c));
	}
	if (!current->end_of_word()) {
		num_words++;
		current->set_end_of_word(true);
	}
}

int Trie::insert(string word) {
	char myarray[word.size()];
	strcpy(myarray, word.c_str());
	insert(myarray);
}

int Trie::search(char word[]) {
	int len = strlen(word);
	TNode* current = root;
	int i = 0;
	while (current != NULL && i < len)
		current = current->exist_child(tolower(word[i++]));
	
	return (current != NULL && current->end_of_word());
}

void Trie::print() {
	char word[100];
	print_words_recursive(root, word, 0);
}

void Trie::print_words_recursive(TNode* root, char word[], int len) {
	TNode* child = root->get_first_child();

	while (child != NULL) {
		word[len] = child->get_node_value();
		// if this is a valid word, print it out
		if (child->end_of_word())
			print_array(word,len+1);
		print_words_recursive(child,word,len+1);
		child = child->get_next();
	}
}

void Trie::print_array(char array[], int len) {
	int i;
	for (i=0; i<len; ++i)
		cout << array[i];
	cout << endl;
}