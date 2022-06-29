CC=gcc 
exeFile = app

$(exeFile): main.o linked_list.o dynamic_ary.o
	$(CC) main.o linked_list.o dynamic_ary.o -o $(exeFile)
	
main.o: main.c
	$(CC) -c main.c

linked_list.o: linked_list.c
	$(CC) -c linked_list.c

dynamic_ary.o: dynamic_ary.c
	$(CC) -c dynamic_ary.c

clean:
	rm -f *.o app
