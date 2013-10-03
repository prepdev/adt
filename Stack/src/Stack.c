/*
 ============================================================================
 Name        : Stack.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include "linked_stack.h"

int main(void) {

	printf("\n Printing stack");
	stack *stack = 0;
	char ch[] = "Luqman Ahmad";
	char *ptr = ch;

	while (*ptr != '\0') {
		push(*ptr,stack);
		printf("\n %c",*ptr);
		ptr++;
	}
	while (EMPTY != stack_empty(stack)) {
		item_t item;
		pop(&item,stack);
		printf("\n %c",item);
	}


	return EXIT_SUCCESS;
}
