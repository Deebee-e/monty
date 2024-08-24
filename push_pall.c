#include "monty.h"
#include <stdlib.h>

/**
 *implement push and pall opcodes
 *Description: opcode pushes elements to the stack while
 *pall code prints all the values on the stack starting from the top
 *@arg_str: checks if arg is not an integer
 */

/* Global variable representing stack */
stack_t *stack = NULL;

/*push function prototype */

void push(stack_t **stack, unsigned int line_number, char *arg_str)
{
int value, i = 0;

/* if argument is not an integer or no argument was passed */
}
if (!arg_str || *arg_str == '\0')
	{ 
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/* if argument is a valid integer or a negative number*/
if (*arg_str == '-' || isdigit(*arg_str)) 
{
	i = (*arg_str == '-') ? 1 : 0;
	while (arg_str[i] != '\0') {
	if (!isdigit(arg_str[arg_str[i])) {
           fprintf(stderr, "L%d: usage: push integer\n", line_number);
           exit(EXIT_FAILURE);
        }
        i++;
}
else {
     fprintf(stderr, "L%d: usage: push integer\n", line_number);
     exit(EXIT_FAILURE);
}

/*use the atoi function to convert arg_str to integer */

value = atoi(arg_Str);
}

/* pall function prototype */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;

while (current != NULL){
printf("%d\n", current->n);
current = current->next;
}

}
