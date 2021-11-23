CC=gcc
AR=ar
OBJECTS_MAIN = main.o
FLAGS= -Wall -g

all: connections
connections: $(OBJECTS_MAIN) libmy_mata.a
	$(CC) $(FLAGS) my_mat.o -o connections $(OBJECTS_MAIN) libmy_mata.a 
libmy_mata.a: my_mat.o#static library for rec and normal
	$(AR) -rcs libmy_mata.a my_mat.o
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 
.PHONY: clean all
clean:
	rm -f *.o connections libmy_mata.a
