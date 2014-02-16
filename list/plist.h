// List class declaration

#ifndef __PLIST_H_
#define __PLIST_H_

#include "pnode.h"

class PList {
private:
	PNode* head;
	PNode* tail;
	PNode* prev_tail;

public:
	PList();
	~PList();

	// required methods
	PNode* first();
	PNode* end();
	PNode* retrieve(int);
	PNode* locate(int);
	PNode* next(PNode*);
	PNode* previous(PNode*);
	void insert(PNode*,int);
	void insert_front(int);
	void insert_back(int);
	void del(PNode*);
	void del_front();
	void del_back();
	void del_back_no_prev();
	void makenull(void);

	int size(void);
	void push_front(int);
	void push_back(int);
	void print(void);
};

#endif