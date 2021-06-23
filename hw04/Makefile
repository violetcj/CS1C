CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = date.o employee.o programmer.o

all: hw04

hw04: hw04.cpp date.o employee.o programmer.o
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

date.o: date.cpp date.h
	$(CC) $(FLAGS) -c date.cpp -o date.o

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

clean:
	rm *.o hw04 hw04.tar

tar:
	tar cf hw04.tar hw04.scr Makefile hw04.cpp date.h date.cpp employee.cpp employee.h programmer.cpp programmer.h
