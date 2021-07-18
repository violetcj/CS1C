CC = g++

FLAGS = -std=c++14 -Wall -g

all: hw10

hw10: hw10.cpp
	$(CC) $(FLAGS) hw10.cpp -o hw10 $(OBJS)

clean:
	rm *.o hw10.tar hw10

tar:
	tar cf hw10.tar hw10.scr Makefile hw10.cpp
