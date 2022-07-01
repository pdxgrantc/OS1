CC=gcc -std=c99
exeFile = app

$(exeFile): main.o text_parser.o dynamic_ary.o commands.o
	$(CC) main.o text_parser.o dynamic_ary.o commands.o -o $(exeFile)
	rm -f *.o
	
main.o: main.c
	$(CC) -c main.c

dynamic_ary.o: dynamic_ary.c
	$(CC) -c dynamic_ary.c

text_parser.o: text_parser.c
	$(CC) -c text_parser.c

commands.o: commands.c
	$(CC) -c commands.c

clean:
	rm -f *.o app
