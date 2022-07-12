CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Hw9.o Shape.o Triangle.o Rectangle.o Circle.o
FILES = Header.h Hw9.cpp Shape.h Shape.cpp Triangle.h Triangle.cpp Rectangle.h Rectangle.cpp Circle.h Circle.cpp

all: Hw9

Hw9: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o Hw9

Hw9.o: Hw9.cpp Triangle.o Rectangle.o Circle.o
	$(CC) $(FLAGS) -c Hw9.cpp

Triangle.o: Triangle.cpp Triangle.h Shape.o
	$(CC) $(FLAGS) -c Triangle.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Shape.o
	$(CC) $(FLAGS) -c Rectangle.cpp

Circle.o: Circle.cpp Circle.h Shape.o
	$(CC) $(FLAGS) -c Circle.cpp

Shape.o: Shape.cpp Shape.h Header.h
	$(CC) $(FLAGS) -c Shape.cpp

tar:
	tar -cf Hw9.tar Hw9.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr Hw9

sudoClean:
	rm *.o *.scr Hw9