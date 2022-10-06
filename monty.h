#ifndef MONTY_H
#define MONTY_H

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

int pop(stack_t *, int);
int push(stack_t *, int);
int display(stack_t *, int __attribute__((unused)));
int enqueue(stack_t *, int);
int dequeue(stack_t *, int);

typedef struct operations
{
	char *cmd;
	int (*func)(stack *, int);
}

#endif /* MONTY_H */
