#makefile for task5 
run: bin/project test
	./bin/project 
bin/project: obj/functions.o obj/source.o  
	gcc -o bin/project obj/functions.o obj/source.o
obj/functions.o: src/functions.c
	gcc -c src/functions.c -o obj/functions.o
obj/source.o: src/source.c
	gcc -c src/source.c -o obj/source.o
test: test/main.cpp test/test.cpp
	g++ -cpp test/main.cpp -o test/main.o
	g++ -cpp test/test.cpp -o test/test.o
	g++ -o test/run_test main.o test.o
	./test/run_test

