ABC.exe: main.o biggest.o factorial.o reverse.o
	gcc -o ABC.exe main.o biggest.o factorial.o reverse.o

main.o: main.c functions.h
	gcc -c main.c

biggest.o: biggest.c functions.h
	gcc -c biggest.c

factorial.o: factorial.c functions.h
	gcc -c factorial.c

reverse.o: reverse.c functions.h
	gcc -c reverse.c

clean:
	rm -f *.o ABC.exe

