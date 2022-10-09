#include "monty.h"
#include <stdlib.h>

/**
 * free_stack - free the nodes of a stack
 * @top: the top of the stack
 */

void free_stack(stack_t *top)
{
	stack_t *stack_node = NULL;

	while (top != NULL)
	{
		stack_node = top->prev;
		free(top);
		top = stack_node;
	}
}
