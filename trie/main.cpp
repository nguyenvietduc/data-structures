// Main
#include "trie.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	/*
	char tmp[] = "hello";
	Trie* trie_p = new Trie;
	trie_p->insert(tmp);
	string newstring = "he";
	trie_p->insert("help");
	trie_p->insert(newstring);
	cout << trie_p->search("he") << endl;
	cout << trie_p->search("help") << endl;
	cout << trie_p->search("He") << endl;
	cout << trie_p->get_num_words() << endl;
	trie_p->print();
	*/
	
	string word;
	ifstream myfile("alice30.txt");
	Trie* trie_p = new Trie;
	if (myfile.is_open()) {
		while (myfile >> word)
			trie_p->insert(word);
		myfile.close();
	} 
	trie_p->print();
	cout << trie_p->get_num_words() << endl;
	cout << trie_p->get_num_nodes() << endl;
	return 0;
}
