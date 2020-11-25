CC=gcc
CFLAGS=-I.
DEPS = 
OBJ = ordenacao_selecao.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ordenacao_selecao: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
