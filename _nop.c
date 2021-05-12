#include "monty.h"

/**
 * _nop - The opcode nop doesn’t do anything.
 * @stack: pointer to pinter to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
