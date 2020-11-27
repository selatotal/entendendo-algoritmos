CC=gcc
CFLAGS=-I.
DEPS = 
OBJ = bfc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bfc: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)