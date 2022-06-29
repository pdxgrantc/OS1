CC=gcc -std=c99 
exeFile = app

$(exeFile): main.o dynamic_ary.o
	$(CC) main.o dynamic_ary.o -o $(exeFile)
	
main.o: main.c
	$(CC) -c main.c

dynamic_ary.o: dynamic_ary.c
	$(CC) -c dynamic_ary.c

clean:
	rm -f *.o app
