#include "monty.h"

/**
 * _rotl - rotates the stack to the top.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack)
		*stack = (*stack)->next;
}
