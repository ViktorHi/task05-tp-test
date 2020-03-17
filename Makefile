#makefile for task5 
#run: bin/project test
#	./bin/project 
CFLAGS = -I. -Wall -ftest-coverage -fprofile-arcs 
DEPS   = lib.h
bin/project: obj/functions.o obj/source.o  
	gcc -o bin/project obj/functions.o obj/source.o
obj/functions.o: src/functions.c
	gcc -c src/functions.c -o obj/functions.o
obj/source.o: src/source.c
	gcc -c src/source.c -o obj/source.o
#%.o: %.c $(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS) 

test-library.out: test/test-library.c 
#	gcc -o $@ $^ $(CFLAGS) -lm -lncurses -Os
	gcc -o test-library.out test/test-library.c $(CFLAGS) -lm -lncurses -Os

clean :
	rm  *.o  *.asm  *.lst *.sym *.rel *.s *.gc* -f *.info

