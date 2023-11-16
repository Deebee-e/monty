#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: head of the stack i.e the top
 * @counter: line number
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack,\n", counter);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	free(temp);
	{
