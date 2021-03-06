#include "monty.h"

/**
 * _mod - omputes the rest of the division of the second top element of
 * the stack by the top element of the stack.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int result;

	if (flag.len_stack < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't mod, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%u: division by zero\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = result;
	_pop(stack, line_number);
}
