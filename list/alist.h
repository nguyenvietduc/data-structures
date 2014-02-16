// List classs declaration
#ifndef __ALIST_H_
#define __ALIST_H_

#define MAX 10000000

class AList {
private:
	int values[MAX];
	int last;
public:
	AList();

	int first() { return 0; }
	int end() { return last; }
	int retrieve(int);
	int locate(int);
	int next(int);
	int previous(int);
	int insert(int,int);
	int del(int);
	void makenull();

	void print();
};

#endif