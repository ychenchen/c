/*
 ============================================================================
 Name        : learningc.c
 Author      : jimmy
 Version     :
 Copyright   : Based on C Primer Plus
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void learningc(){
	int num;
	num = 1;
	printf("I am a simple ");
	printf("C program,\n");
	printf("My favorite number is %d because it is the first one.\n", num);
	printf("start learning c...");
}

int maina(void) {
	learningc();
	return EXIT_SUCCESS;
}
