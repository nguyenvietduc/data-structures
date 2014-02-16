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

build: qnode.o pqueue.o main.o
	${CC} -g -o main qnode.o pqueue.o main.o

qnode.o: qnode.cpp qnode.h
	${CC} -g -c qnode.cpp

pqueue.o: pqueue.cpp pqueue.h
	${CC} -g -c pqueue.cpp

main.o: main.cpp
	${CC} -g -c main.cpp

run:
	./main

clean:
	rm -f main qnode.o pqueue.o main.o
	
