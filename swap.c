#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the head of the stack
 * @line_number: current line number in the file
 */

void swap(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	stack_t *top = *stack;
	int temp = top->n;
	top->n = top->next->n;
	top->next->n = temp;
}
