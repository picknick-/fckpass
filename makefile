CC=gcc
OUTPUT=fckpass
CFLAGS=-O -I.
main: main.c 
	$(CC) -o $(OUTPUT) main.c $(CFLAGS)
