all: main.o fracao.o
	g++ -Wall -ansi -pedantic -O0 -o main ./obj/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./obj/main.o

fracao.o:
	g++ -c ./src/fracao.cpp -I ./include -o ./obj/fracao.o

run:
	./main

