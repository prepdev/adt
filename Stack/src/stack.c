/*
 * stack.c
 *
 *  Created on: 2013-10-02
 *      Author: luqman
 */

#include "stack.h"

int create_stack_arrs (stack_arr *stack) {
	stack->m_top = 0;
	return 0;
}

int stack_full_arr(stack_arr *stack) {
	return ((stack->m_top >= MAX_SIZE) ? FULL : NOT_FULL);
}
int stack_empty_arr (stack_arr *stack) {
	return ((stack->m_top <= 0) ? EMPTY : NOT_EMPTY);
}

void push_arr (stack_arr *stack, item_t item) {
	if (FULL == stack_full_arr(stack)) {
		fprintf(stdout, "\n Stack is Full");
	} else {
		stack->m_entry[stack->m_top++] = item;
	}
}

item_t pop_arr (stack_arr *stack) {

	item_t item;
	if ( EMPTY == stack_empty_arr(stack)) {
		fprintf(stdout , "\n Stack is empty nothing to pop");
	} else {
		item = stack->m_entry[--stack->m_top];
	}
	return item;
}
item_t item_top (stack_arr *stack) {
	return stack->m_entry[stack->m_top];
}

/*!
 * Reverse a string using a stack
 */
void reverse_string () {
	stack_arr stack;
	item_t item;
	create_stack_arrs(&stack);

	while ((FULL != stack_full_arr(&stack)) && (item = getchar()) != '\n')
		push(&stack,item);

	while (stack_empty_arr(&stack) != EMPTY) {
		printf("%c",pop(&stack));
	}
}
