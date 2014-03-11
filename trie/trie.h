// Trie - Linked list implementation
// Trie Class declaration
#ifndef __TRIE_H_
#define __TRIE_H_

#include "tnode.h"
#include <string>

using namespace std;

// trie ADTs
class Trie {
private:
	TNode* root;
	int num_words;
	int num_nodes;
	void print_words_recursive(TNode*,char[],int);
	void print_array(char[],int);
public:
	Trie();
	~Trie();
	int insert(char[]);
	int insert(string);
	void print();
	int search(char[]);
	int get_num_words() { return num_words; }
	int get_num_nodes() { return num_nodes; }
};

#endif