CC=g++
FLAGS=-std=c++14 -Wall -g
OBJS=ManageInventory.o

all: hw07

hw07: hw07.cpp ManageInventory.o
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

ManageInventory.o: ManageInventory.cpp ManageInventory.h
	$(CC) $(FLAGS) -c ManageInventory.cpp -o ManageInventory.o

clean:
	rm *.o hw07.tar hw07

tar:
	tar cf hw07.tar hw07.scr Makefile hw07.cpp ManageInventory.h ManageInventory.cpp