#include "monty.h"
#include <ctype.h>

/**
 * _pstr -  prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	tmp = *stack;

	while (tmp && tmp->n != 0 && isascii(tmp->n) != 0)
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}

	printf("\n");
}
