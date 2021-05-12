#include "monty.h"

/**
 * _add - adds the top two elements of the stack.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (len_stack < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;

	(*stack)->next->n = sum;

	_pop(stack, line_number);
}
