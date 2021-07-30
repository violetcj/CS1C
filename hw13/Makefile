CC = g++

FLAGS = -std=c++14 -Wall -g 

OBJS = Queue.o

all: hw13

hw13: hw13.cpp Queue.o
	$(CC) $(FLAGS) hw13.cpp -o hw13 $(OBJS)

Queue.o: Queue.cpp Queue.h 
	$(CC) $(FLAGS) -c Queue.cpp -o Queue.o


clean:
	rm *.o hw13 hw13.tar

tar: 
	tar cf hw13.tar hw13.scr Makefile hw13.cpp Queue.h Queue.cpp