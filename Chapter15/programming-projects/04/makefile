# Author: Ashley K. Smith
# Part of the solution to Solution to "C Programming: A Modern Approach" chapter 15, programming project 4

remind: remind.o readline.o
	gcc -o remind remind.o readline.o

remind.o: remind.c readline.h
	gcc -c remind.c

readline.o: readline.c readline.h
	gcc -c readline.c
