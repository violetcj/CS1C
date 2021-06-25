CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = date.o employee.o programmer.o softwareArchitect.o

all: hw03

hw03: hw03.cpp date.o employee.o programmer.o softwareArchitect.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

date.o: date.cpp date.h
	$(CC) $(FLAGS) -c date.cpp -o date.o

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

softwareArchitect.o: softwareArchitect.cpp softwareArchitect.h
	$(CC) $(FLAGS) -c softwareArchitect.cpp -o softwareArchitect.o

clean:
	rm *.o hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp date.h date.cpp employee.h employee.cpp programmer.h programmer.cpp softwareArchitect.h softwareArchitect.cpp
