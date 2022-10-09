#include "monty.h"
/**
 * check_number - check if string contains digit
 * @num_str: the string to check
 * @line_number: an integer to use to formate error message
 */

void check_number(char *num_str, unsigned int line_number)
{
	char xter;

	if (num_str == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	xter = num_str[0];

	if (xter <= '0' && xter >= '9')
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
}
