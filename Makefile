CC=gcc
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all: prog
prog: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o prog $(OBJECTS_MAIN)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o prog