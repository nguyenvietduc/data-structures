### To compile type
###	make build
### To run type
###	make run
### To do both just type
###	make
### To erase all object files type
###	make clean

###For C++
CC=g++
CFLAGS=-g
LDFLAGS=
ODIR=obj
SDIR=src

default: build run

build: bnode.o bst.o main.o
	${CC} -g -o main bnode.o bst.o main.o

bnode.o: bnode.cpp bnode.h
	${CC} -g -c bnode.cpp

bst.o: bst.cpp bst.h
	${CC} -g -c bst.cpp

main.o: main.cpp
	${CC} -g -c main.cpp

run:
	./main

clean:
	rm -f main bnode.o bst.o main.o
	
