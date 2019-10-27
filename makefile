all: main.o functions.o
	gcc -o test_list main.o functions.o

main.o: main.c headers.h
	gcc -c main.c

functions.o: functions.c headers.h
	gcc -c functions.c

run: 
	./text_list.exe

clean:
	rm *.o
	rm text_list
	rm *~
