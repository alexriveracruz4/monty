#include "monty.h"

/**
 * _rotr -  rotates the stack to the bottom.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack)
		*stack = (*stack)->prev;
}
