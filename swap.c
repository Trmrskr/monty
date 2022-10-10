#include "monty.h"

/**
 * swap - function that swaps the top two items in a sack
 * @top: the top of the stack
 * @line_number: the current line number
 */

void swap(stack_t **top, unsigned int line_number)
{
	int tmp_num;

	if (!top || !*top || !((*top)->prev))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
line_number);
		exit(EXIT_FAILURE);
	}
	
	tmp_num = (*top)->n;
	(*top)->n = (*top)->prev->n;
	(*top)->prev->n = tmp_num;
}
