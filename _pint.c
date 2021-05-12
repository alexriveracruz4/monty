#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}
