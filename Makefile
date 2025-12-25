CC=gcc
CFLAGS=-I.
DEPS=main.c
OBJ=main.o

base: $(OBJ)
	$(CC) -o $@ $< $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
