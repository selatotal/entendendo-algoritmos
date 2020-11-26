CC=gcc
CFLAGS=-I.
DEPS = 
OBJ = quicksort.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

quicksort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)