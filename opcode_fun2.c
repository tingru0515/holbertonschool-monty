#include "monty.h"

/**
* op_add - add two elements on the top of the stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: the number of nodes
*/
void op_add(stack_t **stack, unsigned int line_number)
{
	size_t n = 0;
	stack_t *temp = *stack;
	line_number = line_number;
	n = dlistint_len(var.stack_head);
	if (n < 2)
	{
		handle_dlist_head(var.stack_head);
		free(var.getl_info);

