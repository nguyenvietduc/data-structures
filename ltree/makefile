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

build: ltree.o lcell.o main.o
	${CC} -g -o main ltree.o lcell.o main.o

ltree.o: ltree.cpp ltree.h
	${CC} -g -c ltree.cpp

lcell.o: lcell.cpp lcell.h
	${CC} -g -c lcell.cpp

main.o: main.cpp
	${CC} -g -c main.cpp

run:
	./main

clean:
	rm -f main ltree.o lcell.o main.o
	
