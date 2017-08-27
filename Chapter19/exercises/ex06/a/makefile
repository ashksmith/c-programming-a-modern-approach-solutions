main: stack.o stackclient.o
	gcc -o main stackADT.o stackclient.o

stack.o: stackADT.c stackADT.h
	gcc -c stackADT.c

stackclient.o: stackclient.c stackADT.h
	gcc -c stackclient.c
