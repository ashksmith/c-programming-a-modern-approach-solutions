main: stack.o stackclient.o
	gcc -o main stackADT3.o stackclient.o

stack.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

stackclient.o: stackclient.c stackADT.h
	gcc -c stackclient.c
