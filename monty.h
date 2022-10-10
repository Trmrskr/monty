#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define LINE_SIZE 1000000

extern int num_value;

/**
 * struct stack_s - the stack struct
 * @n: the number in the stack
 * @prev: pointer to previous node
 * @next: pointer to next node
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

int set_number(char *num_str, unsigned int line_number);
void push(stack_t **, unsigned int line_number);
int pop(stack_t **, unsigned int line_number);
void popout(stack_t **, unsigned int line_number);
void free_stack(stack_t *);
void print_stack(stack_t **, unsigned int line_number);
void print_stack_top(stack_t **, unsigned int line_number);
void swap(stack_t **, unsigned int line_number);
void nop(stack_t **, unsigned int line_number);

/**
 * struct instruction_s - instruction struct
 * @opcode: the opcode command
 * @f: pointer to function
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void (*get_func(char *cmd))();
#endif /* MONTY_H */
