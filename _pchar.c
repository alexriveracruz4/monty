#include "monty.h"
#include <ctype.h>

/**
 * _pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int asc;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	asc = (*stack)->n;
	if (isascii(asc) == 0)
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", asc);
}
