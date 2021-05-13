#include "monty.h"

/**
 * _sub - subtracts the top element of the stack from the second top element of
 * the stack.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int result;

	if (flag.len_stack < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n - (*stack)->n;
	(*stack)->next->n = result;
	_pop(stack, line_number);
}
