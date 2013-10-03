/*
 * linked_stack.h
 *
 *  Created on: 2013-10-02
 *      Author: luqman
 */

#ifndef LINKED_STACK_H_
#define LINKED_STACK_H_

typedef char item_t;
typedef enum {
	FULL = -2,
	EMPTY = -1,
	NOT_FULL = 1,
	NOT_EMPTY = 2
}state_t;
typedef struct node{
	item_t item;
	struct node *next;
}node_t;

typedef struct stack {
	node_t* top;
}stack;

node_t* make_node (item_t item);
int stack_empty (stack *top);
void push (item_t item, stack *top);
void pop (item_t *item, stack *top);

#endif /* LINKED_STACK_H_ */
