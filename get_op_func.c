#include "monty.h"
#include <stddef.h>

/**
 * get_func - a function that returns another function
 * @cmd: command that determines function to run
 * Return: a function that corresponds to command, NULL otherwise
 */

void (*get_func(char *cmd))()
{
	int i = 0;
	instruction_t ins_op[] = {
		{"push", push},
		{"pop", popout},
		{"pall", print_stack},
		{"pint", print_stack_top},
		{"swap", swap},
		{"nop", nop},
		{NULL, NULL}
	};

	while (ins_op[i].opcode != NULL)
	{
		if (strcmp(ins_op[i].opcode, cmd) == 0)
			return (ins_op[i].f);
		i++;
	}
	return (NULL);
}
