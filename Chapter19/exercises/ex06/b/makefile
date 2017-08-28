main: stack.o stackclient.o
	gcc -o main stackADT2.o stackclient.o

stack.o: stackADT2.c stackADT2.h
	gcc -c stackADT2.c

stackclient.o: stackclient.c stackADT2.h
	gcc -c stackclient.c
