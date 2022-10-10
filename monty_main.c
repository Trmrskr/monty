#include "monty.h"

void file_line_processing(FILE *monty_file);

int num_value = 0;
/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	FILE *monty_file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	file_line_processing(monty_file);
	fclose(monty_file);
	return (0);
}

/**
 * file_line_processing - a function to process lines of file
 * @monty_file: file to be processed
 */

void file_line_processing(FILE *monty_file)
{
	stack_t *top = NULL;
	char *cmd = NULL, *cmd_arg = NULL, *lline;
	char line[LINE_SIZE];
	int line_no = 1;
	void (*func_ptr)(stack_t **, unsigned int);

	while (fgets(line, LINE_SIZE, monty_file))
	{
		lline = strtok(line, "\n");
		cmd = strtok(lline, " ");
		if (cmd == NULL || cmd[0] == '\0')
			continue;
		if (strcmp(cmd, "push") == 0)
		{
			cmd_arg = strtok(NULL, " ");
			check_number(cmd_arg, line_no);
			num_value = atoi(cmd_arg);
			push(&top, line_no);
			continue;
		}
		func_ptr = get_func(cmd);
		if (func_ptr == NULL)
		{
			fprintf(stderr, "L%d: Unknown instruction %s\n", line_no, cmd);
			exit(EXIT_FAILURE);
		}
		else
			func_ptr(&top, line_no);
		line_no++;
	}
	free_stack(top);
}
