#include "monty.h"

/**
 * push - a function that pops from the stack
 * @top: the top of the stack
 * @line_number: current line number
 *
 */

void push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node = NULL;

	(void)line_number;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "%s\n", "Error, Memory Allocation");
		exit(EXIT_FAILURE);
	}
	new_node->n = num_value;
	new_node->next = NULL;
	new_node->prev = *top;
	*top = new_node;
}
