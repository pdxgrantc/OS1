CC=gcc 
exeFile = app

$(exeFile): main.o text_parser.o dynamic_ary.o
	$(CC) main.o text_parser.o dynamic_ary.o -o $(exeFile)
	
main.o: main.c
	$(CC) -c main.c

dynamic_ary.o: dynamic_ary.c
	$(CC) -c dynamic_ary.c

text_parser.o: text_parser.c
	$(CC) -c text_parser.c

clean:
	rm -f *.o app
