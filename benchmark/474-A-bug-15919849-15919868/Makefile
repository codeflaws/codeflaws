FILENAME=474-A-15919849
CC=gcc
CFLAGS=-fno-optimize-sibling-calls -fno-strict-aliasing -fno-asm -std=c99
LDFLAGS=-lm -s -O2
all:
	$(CC) $(CFLAGS) -c $(FILENAME).c -o $(FILENAME).o
	$(CC) $(FILENAME).o -o $(FILENAME) $(LDFLAGS)
.PHONY: clean
clean:
	rm -f *.o $(FILENAME)
