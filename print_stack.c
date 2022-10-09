#include "monty.h"

/**
 * print_stack - print the elements in a stack
 * @top: the top element in the stack
 * @line_number: current line number
 */

void print_stack(stack_t **top, unsigned int line_number)
{
	stack_t *stack_node = *top;
	(void)line_number;

	while (stack_node != NULL)
	{
		fprintf(stdout, "%d\n", stack_node->n);
		stack_node = stack_node->prev;
	}
}

/**
 * print_stack_top - print item at the top of stack
 * @top: the top of the stack
 * @line_number: current line number
 */

void print_stack_top(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't print, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*top)->n);
}
