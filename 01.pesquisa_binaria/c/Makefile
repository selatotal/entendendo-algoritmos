CC=gcc
CFLAGS=-I.
DEPS = 
OBJ = pesquisabinaria.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pesquisabinaria: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
