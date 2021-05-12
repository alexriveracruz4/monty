#include "monty.h"

/**
 * _pall - print values of the stack
 * @stack: pointer to pointer to stack
 * @line_number: number of line executed
 *
 * Return: void
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	tmp = *stack;
	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		if (tmp == *stack)
			return;
	}
}
