CC=gcc
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all: connections
connections: $(OBJECTS_MAIN) libmy_mata.a 
	$(CC) $(FLAGS)  -o connections $(OBJECTS_MAIN) libmy_mata.a
libmy_mata.a: my_mat.o 
	ar -rcs libmy_mata.a my_mat.o
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h 
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o  connections libmy_mata.a
