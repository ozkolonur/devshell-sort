CC=gcc

CFLAGS=-g3 -O0 -ggdb

all: shell_sort

shell_sort: main.c Makefile
	$(CC) $(CFLAGS) main.c -o shell_sort

clean: 
	rm -f shell_sort
