# Author: Ashley K. Smith
# Part of the solution to Solution to "C Programming: A Modern Approach" chapter 15, programming project 3

qsort: qsort.o quicksort.o
	gcc -o qsort qsort.o quicksort.o

qsort.o: qsort.c quicksort.h
	gcc -c qsort.c

quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c
