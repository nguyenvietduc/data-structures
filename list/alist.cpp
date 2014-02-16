// Array implementation of list

#include "alist.h"
#include <iostream>

using namespace std;

AList::AList() {
	last = 0;
}

// functions

int AList::retrieve(int pos) {
	if (pos < 0 || pos >= MAX)
		return NULL;
	return values[pos];
}

int AList::locate(int x) {
	int i;
	for (i=0; i<last; ++i)
		if (values[i] == x)
			return i;
	return -1;
}

int AList::next(int pos) {
	if (pos < 0 || pos >= last)
		return -1; // position out of range
	return (pos+1);
}

int AList::previous(int pos) {
	if (pos < 1 || pos >= last)
		return -1; // position out of range
	return (pos-1);
}

int AList::insert(int x, int pos) {
	if (last >= MAX)
		return 0; // list is full

	if (pos < 0 || pos > last)
		return -1; // position out of range

	for (int i=last; i>pos; --i)
		values[i] = values[i-1];
	values[pos] = x;
	last++;
	return 1;
}

int AList::del(int pos) {
	if (pos < 0 || pos >= last)
		return -1; // position out of range	

	int i;
	for (i=pos; i<last-1; ++i)
		values[i] = values[i+1];
	last--;
	return 1;
}

void AList::makenull() {
	last = 0;
}

void AList::print() {
	for (int i=0; i<last; i++)
		cout << values[i] << " ";
	cout << endl;
}