#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define LINE_SIZE 1000000

extern int num_value;

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

void check_number(char *num_str, unsigned int line_number);
void push(stack_t **, unsigned int line_number);
int pop(stack_t **, unsigned int line_number);
void popout(stack_t **, unsigned int line_number);
void free_stack(stack_t *);
void print_stack(stack_t **, unsigned int line_number);
void print_stack_top(stack_t **, unsigned int line_number);
/*int enqueue(stack_t *, int line_number);
int dequeue(stack_t *);*/
void nop(stack_t **, unsigned int line_number);

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void (*get_func(char *cmd))();
#endif /* MONTY_H */
