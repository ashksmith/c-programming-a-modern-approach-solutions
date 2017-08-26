main: client.o queue.o
	gcc -o main client.o queue.o

client.o: client.c queue.h
	gcc -c client.c queue.h

queue.o: queue.c queue.h
	gcc -c queue.c queue.h

