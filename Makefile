# Makefile for Hello World project
hello: source.c
	gcc -o hello source.c -I
clean:
	rm -f hello