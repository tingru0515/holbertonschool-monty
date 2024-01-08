#include "monty.h"

/**
* handle_dlist_head - handle the head of a doubly linked list
* @head: address of the head of the linked list
*
* Return: nothing
*/
void handle_dlist_head(stack_t *head)
{
	stack_t *tmp_1 = NULL, *tmp_2 = NULL;

	if (head == NULL)
	{
		return;
	}
	tmp_1 = head->next;
	while (tmp_1 != NULL)
	{
		tmp_2 = tmp_1->next;
		free(tmp_1);
		tmp_1 = tmp_2;
	}
	free(head);
}
