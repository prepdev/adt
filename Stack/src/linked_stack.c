/*
 * linked_stack.c
 *
 *  Created on: 2013-10-02
 *      Author: luqman
 */

#include "linked_stack.h"


node_t* make_node(item_t item) {
	node_t* node =  (node_t*) malloc(sizeof(node_t));
	if (!node) {
		printf("\n Malloc failed");
		return 0;
	}
	node->item = item;
	node->next = 0;

	return node;
}


int stack_empty (stack *stack) {
	return (stack->top == 0) ? EMPTY : NOT_EMPTY;
}

void push (item_t item, stack *stack) {

	//create a node
	node_t* node = make_node(item);
	if (!node) {
		printf("\n Unable to allocate node");
	}
	else {
		node->next = stack->top; //make the new node point to existing one
		stack->top = node; //update the top
	}
}
void pop (item_t *item, stack *stack) {

	node_t *temp = 0;

	if (EMPTY == stack_empty(stack)) {
		printf("\n Stack is empty");
	}
	else {
		temp = stack->top;
		*item = temp->item;
		stack->top = stack->top->next;
		free(temp);
	}
}
