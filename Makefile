CC=gcc
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all: connections
connections: $(OBJECTS_MAIN) libmy_mat.a 
	$(CC) $(FLAGS)  -o connections $(OBJECTS_MAIN) libmy_mat.a
libmy_mat.a: my_mat.o 
	ar -rcs libmy_mat.a my_mat.o
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h 
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o *.a connections libmy_mat.a
