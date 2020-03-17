#makefile for task5 
#run: bin/project test
#	./bin/project 
CFLAGS = -I. -Wall -ftest-coverage -fprofile-arcs 
DEPS   = lib.h
bin/project: obj/functions.o obj/source.o test-library.out
	gcc -o bin/project obj/functions.o obj/source.o

obj/functions.o: src/functions.c
	gcc -c src/functions.c -o obj/functions.o
obj/source.o: src/source.c
	gcc -c src/source.c -o obj/source.o
#%.o: %.c $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS) 

test-library.out: test/test-library.c 
#	gcc -o $@ $^ $(CFLAGS) -lm -lncurses -Os
	gcc -c test/test-library.c -o obj/test-library.o
	gcc -o test-library.out obj/test-library.o obj/functions.o $(CFLAGS) -lm -lncurses -Os 
#	gcc test/test-library.c $(CFLAGS) -lm -lncurses -Os

clean :
	rm  *.o  *.asm  *.lst *.sym *.rel *.s *.gc* -f *.info

