/*
 * stack
 *
 *  Created on: 2013-10-02
 *      Author: luqman
 */

#ifndef STACK_
#define STACK_
#include <stdio.h>
/*!
 * Array based Stack
 */
//Max Size of stack
#define MAX_SIZE 10
typedef enum {
	FULL = -2,
	EMPTY = -1,
	NOT_FULL = 1,
	NOT_EMPTY = 2
}state_t;

typedef char item_t;
typedef struct {
	int m_top;
	item_t m_entry[MAX_SIZE]; //Array Stack of characters
}stack_arr;

int create_stack_arr (stack_arr *stack);
int stack_full_arr(stack_arr *stack);
int stack_empty_arr (stack_arr *stack);
void push_arr (stack_arr *stack, item_t item);
item_t pop_arr (stack_arr *stack);
item_t item_top (stack_arr *stack);

#endif /* STACK_ */
