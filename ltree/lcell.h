// Cellspace Class declaration
// List of children representation of tree
#ifndef __LCELL_H_
#define __LCELL_H_

class LCell {
private:
	int value;
	int next;
public:
	LCell();
	LCell(int,int);
	~LCell();

	int get_value() { return value; }
	int get_next() { return next; }
};

#endif
