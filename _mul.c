#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack with the top
 * element of the stack
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int result;

	if (len_stack < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->n * (*stack)->next->n;
	(*stack)->next->n = result;
	_pop(stack, line_number);
}
