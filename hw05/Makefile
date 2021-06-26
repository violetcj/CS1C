CC = g++ 

FLAGS = -std=c++14 -Wall -g

all: hw05

hw05: hw05.cpp
	$(CC) $(FLAGS) hw05.cpp

clean:
	rm *.o hw05 hw05.tar

tar:
	tar cf hw05.tar hw05.scr Makefile hw05.cpp
