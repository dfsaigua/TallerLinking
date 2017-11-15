CC=gcc
CFLAGS=-I.
DEPS = funcion.h
OBJ = main2.o multvec.o addvec.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main2: $(OBJ)
	gcc -Wall -g -o $@ $^ $(CFLAGS)
