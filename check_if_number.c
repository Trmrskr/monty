#include "monty.h"

int is_number(char *str);
/**
 * set_number - check if string contains digit
 * @num_str: the string to check
 * @line_number: an integer to use to formate error message
 * Return: num_value
 */

int set_number(char *num_str, unsigned int line_number)
{
	int num;

	if (is_number(num_str) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		num = atoi(num_str);
	}

	return (num);
}

int is_number(char *str)
{
	int i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] <= '0' && str[i] >= '9')
			return (0);
		i++;
	}
	return (1);
}
