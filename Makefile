CXX= gcc
CXXFLAGS= -Wall -Werror -I. -std=c99
RM= rm -f

.PHONY: all clean

all: main.o
	gcc -o comp main.o

clean:
	$(RM) *.o

main.o: main.c
	gcc -c main.c
