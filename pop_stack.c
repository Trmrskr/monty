#include "monty.h"

/**
 * pop - pop element from the stack
 * @top: the top of the stack element
 * @line_number: the current line number of program
 * Return: the popped element from the top
 */

int pop(stack_t **top, unsigned int line_number)
{
	int top_element = (*top)->n;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	*top = (*top)->prev;
	(*top)->next = NULL;

	return (top_element);
}

/**
 * popout - pop element from the stack  without returning
 * @top: the top of the stack element
 * @line_number: the current line number of program
 */

void popout(stack_t **top, unsigned int line_number)
{
	pop(top, line_number);
}
