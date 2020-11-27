CC=gcc
CFLAGS=-I.
DEPS = 
OBJ = voters.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

voters: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)