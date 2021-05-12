#ifndef MONTY_H
#define MONTY_H

/*Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*Extern variable to control lenght of stack*/

extern int len_stack;

/*Functions*/

void app_opcode(char *opc, stack_t **stack, unsigned int n_line);
void _push(stack_t **stack, unsigned int line_number);
stack_t *add_node(stack_t **stack, int n);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void free_line(int s, void *arg);
void free_stack(int s, void *arg);
void close_file(int s, void *arg);

#endif
