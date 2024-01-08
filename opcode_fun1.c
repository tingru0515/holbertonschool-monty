#include "monty.h"

/**
* op_push - adds a new node at the stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: void.
*/
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	line_number = line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free(var.getl_info);
		fclose(var.fp_struct);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = var.node_data;

	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}

	*stack = new;
}

/**
* op_pall - prints all the values on the stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: void
*/
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *printer_aux = *stack;

	printer_aux = *stack;
	line_number = line_number;

	while (printer_aux != NULL)
	{
		printf("%d\n", printer_aux->n);
		printer_aux = printer_aux->next;
	}
}
