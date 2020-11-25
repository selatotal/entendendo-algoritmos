.DEFAULT_GOAL := all

CC=gcc
CFLAGS=-I.
DEPS= 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

higher: higher.o
	$(CC) -o $@ $^ $(CFLAGS)

sum: sum.o
	$(CC) -o $@ $^ $(CFLAGS)

count: count.o
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o sum count

all: sum count higher
