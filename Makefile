CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Hw9.o Triangle.o Rectangle.o
FILES = Header.h Hw9.cpp Shape.h Triangle.h Triangle.cpp Rectangle.h Rectangle.cpp

all: Hw9

Hw9: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o Hw9

Hw9.o: Hw9.cpp Triangle.o Rectangle.o
	$(CC) $(FLAGS) -c Hw9.cpp


Triangle.o: Triangle.cpp Triangle.h Shape.h Header.h
	$(CC) $(FLAGS) -c Triangle.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Shape.h Header.h
	$(CC) $(FLAGS) -c Rectangle.cpp

tar:
	tar -cf Hw9.tar Hw9.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr Hw9

sudoClean:
	rm *.o *.scr Hw9