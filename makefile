CC=gcc
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all: connections
connections:my_mat.o main.o
	$(CC) $(FLAGS) $(OBJECTS_MAIN) main.o  -o connections
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c my_mat.h
main.o: main.c my_mat.h 
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o *.a *.so connections 
