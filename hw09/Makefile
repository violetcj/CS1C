CC=g++

FLAGS=-std=c++14 -Wall -g

OBJS=Shape.o Triangle.o Rectangle.o 

all: hw09

hw09: hw09.cpp Shape.o Triangle.o Rectangle.o 
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

Shape.o: Shape.cpp Shape.h
	$(CC) $(FLAGS) -c Shape.cpp -o Shape.o 

Triange.o: Triangle.cpp Triangle.h
	$(CC) $(FLAGS) -c Triangle.cpp -o Triangle.o 

Rectangle.o: Rectangle.cpp Rectangle.h 
	$(CC) $(FLAGS) -c Rectangle.cpp -o Rectangle.o 

clean:
	rm *.o hw09 hw09.tar 

tar: 
	tar cf hw09.tar hw09.scr Makefile hw09.cpp Shape.h Shape.cpp Rectangle.h Rectangle.cpp Triangle.h Triangle.cpp