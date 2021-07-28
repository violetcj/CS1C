CC=g++

FLAGS = -std=c++17 -Wall -g 

all: hw15

hw15: hw15.cpp
	$(CC) $(FLAGS) hw15.cpp -o hw15 

clean:
	rm *.o hw15 hw15.tar

tar: 
	tar cf hw15.tar hw15.scr Makefile hw15.cpp 