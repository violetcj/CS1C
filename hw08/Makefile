CC = g++

FLAGS = -std=c++11 -std=c++14 -Wall -g

all: hw08

hw06: hw08.cpp
	$(CC) $(FLAGS) hw08.cpp -o hw08 $(OBJS)

clean: 
	rm  hw08 

tar:
	tar cf hw08.tar hw08.scr Makefile hw08.cpp

