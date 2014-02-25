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

build: tnode.o cellspace.o main.o
	${CC} -g -o main tnode.o cellspace.o main.o

tnode.o: tnode.cpp tnode.h
	${CC} -g -c tnode.cpp

cellspace.o: cellspace.cpp cellspace.h
	${CC} -g -c cellspace.cpp

main.o: main.cpp
	${CC} -g -c main.cpp

run:
	./main

clean:
	rm -f main tnode.o cellspace.o main.o
	
