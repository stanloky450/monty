#include "monty.h"
/**
* free_stack - free a doubly linked list function
* @head: head of the stack function
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

